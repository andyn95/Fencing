// Andy Ninh

#include <iostream>
using namespace std;

int main() 
{
	int length;
	int width;
	int height;
	int gates;
	int linkLength;

	cout << "Welcome to the chain link fence program." << endl;

	cout << "Please enter in a value for the length of the gate." << endl;
	cin >> length;
	cout << "Please enter in a value for the width of the gate." << endl;
	cin >> width;
	cout << "Please enter in a value for the height of the gate." << endl;
	cin >> height;
	cout << "Please enter in the number of gates desired." << endl;
	cin >> gates;

	cout << "The amount of chain link fencing that is needed would be :" << endl;
	linkLength = (length*2)+(width*2)-(gates*3); 

	cout << linkLength << endl;
	cout << "There were a total of " << gates << " gates that were ordered." << endl;

//	cost = 

//	cout << "The cost for the chain link fencing and gates is: $" << cost << endl;
}
