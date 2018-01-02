/* TheAverageOfTheAverage
Duy Anh Nguyen
October 18, 2017
This program will get me the bonus mark for my uncureable test.
It will calculate the average, or my average mark for Mr. Scott. Save his time...
Process:
- Get the number of value. (3x)
    + Get all the value.
        + Add all the value together and divide by number of value.
- Print the result - Average.
*/

 // Pre-processor directive:
#include <iostream>
using namespace std;

 // Function prototype:
double aver(int num_value);                // Calculate the average

 // Main program
int main(void)
{
     // Average four times
	for (int counter = 1; counter <= 3; counter++)
	{
         // Function variable dictionary:
		int num_value;                // How many number do user need to average
		double average;               // The average of all value user entered

         // GEt input - Numer of value
		cout << "Enter the number of value: ";
		cin >> num_value;

	     // Calculate average
		average = aver(num_value);

         // Print average
		cout << "The average of those " << num_value << " number was " << average << endl;
	} // For

     // Return
	return 0;
} // Main


 /* Function */
 /* aver(int) - This function will ask all the value, add them together and divide by the number of value.
 Parameter:
 + num_value - The number of value.
 */
double aver(int num_value)
{
	int sum = 0;
	for (int counter = 1; counter <= num_value; counter++)
	{
         // Function variable dictionary:
		int value;                 // Individual value

         // Get input - Value
		cout << "Enter value: ";
		cin >> value;

         // The sum of all value
		sum += value;
	} // For

     // Return - End result average
	return sum / num_value;
} // aver(int)