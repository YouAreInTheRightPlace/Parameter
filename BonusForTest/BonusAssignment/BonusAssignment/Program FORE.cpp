 /* Program FORE
 Duy Anh Nguyen
 October 19, 2017
 This program will get me my 1 bonus mark!!!
 It will do exactlly what is suppose to do... I suppose...
 Process:
 - Loop for 18 holes.
 - Simulate game play.
 - Print result
 */

 // Pre-processor directive:
#include <iostream>
#include <time.h>
using namespace std;


 // Function prototype:
void play_hole(int number, int par, int &totalscore, int &totalpar);
void seed_random(void);


int main(void)
{
     // Local variable dictionary:
	int par, totalscore = 0, totalpar = 0;
	int under_above;

     // Seed random generator
	seed_random();

	for (int count = 1; count <= 18; count++)
	{
		cout << "What is the par for hole" << count << ": ";
		cin >> par;

		play_hole(count, par, totalscore, totalpar);
	} // For

	cout << "You finnished with the score of " << totalscore << " on the par " << totalpar << " course. ";

	under_above = totalscore - totalpar;

     // Print under or above par
	if (under_above > 0)
		cout << "Which was " << under_above << " above par!" << endl;
	else if (under_above < 0)
		cout << "Which was " << under_above << " below par!" << endl;
	else
		cout << "Which was equal to par!" << endl;

     // Stop point
	system("pause");

     // Return
	return 0;
} // Main


 /* Function */
 /* seed_random(void) - This function will seed the random generator for random number.
 */
void seed_random(void)
{
	// Local variable dictionary:
	int i;            // Loop counter

					  // Seed the random number generator use the timer
	srand((unsigned)time(NULL));
	for (i = 0; i<rand(); i++)
		rand();
} // seed_random(void)

 /* play_role(int, int, int, int) - This function will simulate the golf game play.
 Parameter:
 + number - Round number.
 + par - The par user would score.
 + totalscore - User's total score.
 + totalpar - User's total par
 */
void play_hole(int number, int par, int &totalscore, int &totalpar)
{
     // Random chance of score
	int random;
	random = rand() % 100 + 1;
	int par_score = 0;

     // Check par score
	if (random >= 1 && random <= 50)          // 50% same number
		par_score = par;
	else if (random >= 51 && random <= 70)    // 20% increase by 1
		par_score = par + 1;
	else if (random >= 71 && random <= 90)    // 20% decrease by 1
		par_score = par - 1;
	else if (random >= 91 && random <= 95)    // 5% increase by 2
		par_score = par + 2;
	else                                      // 5% decrease by 2
		par_score = par - 2;

     // Upgrate total par and score
	totalpar += par;
	totalscore += par_score;

     // Print result
	cout << "For hole " << number << ", par " << par << ", you got a " << par_score << endl;
} // play_role(int, int, int, int)