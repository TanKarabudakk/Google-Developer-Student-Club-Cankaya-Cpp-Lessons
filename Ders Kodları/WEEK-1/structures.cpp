#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable

struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

int main(void){
	
	vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
 
    // Vector becomes 1, 2, 3, 4, 5
 
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
	
	myvector.pop_back();
 
    // Vector becomes 1, 2, 3, 4
 
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
	
	// Assign values to members of myStructure
	myStructure.myNum = 1;
	myStructure.myString = "Hello World!";

	// Print members of myStructure
	cout << myStructure.myNum << "\n";
	cout << myStructure.myString << "\n";
	
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;

	// Put data into the second structure
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	// Print the structure members
	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";	
	
	myDataType myVar;
  	myVar.myNum = 2;
  	myVar.myString = "Number Two";
}
