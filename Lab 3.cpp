/* Programmer: Drew Welbourn
Lab #3 - Twistin by the Pool
Purpose: To determin the dimensions of in ground pools.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	float length, width, avgdepth;

	cout << "Please enter the length, width and average depth of the pool as prompted.";

	cout << setfill(' ') << setw(50) << " " << endl;
		
    cout << "Enter the length of the pool: ";
	cin >> length;

	cout << "Enter the width of the pool: ";
	cin >> width;

	cout << "Enter the average depth of the pool: ";
	cin >> avgdepth;
	
	float perimeter, volume, underGroundSA;

	perimeter = 2 * (length + width);
	volume = length * width * avgdepth;
	underGroundSA = 2 * (length + width) * avgdepth + length * width;

	cout << setfill(' ') << setw(20) << " " << endl;

	cout << "The perimeter, volumne and underground surface area of the pool are:";

	cout << setfill(' ') << setw(100) << " " << endl;

	

    cout << setfill(' ') << setw(15) << " " << setfill('*') << setw(1) << "*" << setfill(' ') << setw(1) << " " /n
		<< "The perimeter is: " << perimeter << endl;
	
	cout << setfill(' ') << setw(15) << " " << setfill('*') << setw(1) << "*" << setfill(' ') << setw(1) << " " /n
		<< "The volume is: " << volume << endl;
	
	cout << setfill(' ') << setw(15) << " " << setfill('*') << setw(1) << "*" << setfill(' ') << setw(1) << " " /n
		<< "The underground surface area is: " << underGroundSA << endl;
	

    cout << setfill(' ') << setw(200) << " " << endl;

	
	return 0;
}