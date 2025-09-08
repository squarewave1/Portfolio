// This program asks for the distance between points   // Validate the two coordinates of the points and
// calculates the distance to display it. 

// FELIX RIVERA RODRIGUEZ

#include <iostream>
#include <iomanip>    // For setprecision 
#include <cmath>      // For the sqrt and pow functions



using namespace std;


int main()
{

	float x1, x2, y1, y2, distance;
	cout << "Enter the value of x1: " << endl;
	cin >> x1;
	while (x1 <= 0)
	{
		cout << "Error, las distancias no pueden ser negativas\n";
		cout << "Enter the length of side a: ";   cin >> x1;

	}//end while 
	cout << "Enter the value of x2: " << endl;
	cin >> x2;
	while (x2 <= 0)
	{
		cout << "Error, las distancias no pueden ser negativas\n";
		cout << "Enter the length of side a: ";   cin >> x2;

	}//end while 
	cout << "Enter the value of y1: " << endl;
	cin >> y1;
	while (y1 <= 0)
	{
		cout << "Error, las distancias no pueden ser negativas\n";
		cout << "Enter the length of side a: ";   cin >> y1;

	}//end while 
	cout << "Enter the value of y2: " << endl;
	cin >> y2;
	while (y2 <= 0)
	{
		cout << "Error, las distancias no pueden ser negativas\n";
		cout << "Enter the length of side a: ";   cin >> y2;

	}//end while 

	distance = sqrt(pow(x1 - y1, 2.0) + pow(x2 - y2, 22.0));
	cout << "The distance between this two points is " << distance << endl;

	system("pause");

	return 0;

}
