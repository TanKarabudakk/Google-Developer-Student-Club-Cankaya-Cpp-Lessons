//Document created by Tan KARABUDAK 25.10.2022
//This is a comment

/*This 
is also a
comment*/

/*Comments do not affect our code yet to write understandable codes,
it is vital for us to support these codes with comments*/

#include<iostream> //This iostream libary which also goes for input-output stream
//This libary controls and holds needed functions vital for basic IO actions for C++

using namespace std;

int main(void){//This is the main class of our codes, all functions and classes we will learn to write further, 
//will work under our main class
	//std::cout<<"Hello World"<<std::endl;
	//If we use namespace std can be written as
	cout<<"Hello World"<<endl;
	cout<<"Hello World\n";
	//2 Escape sequences we will teach \n and \t
	//endl does the same job as \n, ends the line
	//Data types
	/*
	integer (int) == holds 2 or 4 bytes 
	floating-point (float) == holds 4 bytes
	double floating-point (double) == holds 8 bytes
	character (char) == holds 1 byte
	boolean (bool) == Holds 1 byte which are either True or False
	void == holds 0 bytes (or empty)
	*/
	// << is for outputs
	// >> is for inputs
	//----------------------------------------------
	//Input-output
	int a = 7;

	int d;
	cout<<"Enter an integer: "<<endl;
	cin>>a;
	cout<<"The integer you entered is "<<a<<"\n";
	cin>>d;
	cout<<"The integer you entered is "<<d<<"\n";
	
	float b;
	cout<<"Enter a float: "<<endl;
	cin>>b;
	cout<<"The float you entered is "<<b<<"\n";
	//Whatever text left is used for the next input if we input a different value
	char c;
	cout<<"Enter a char: "<<endl;
	cin>>c;
	cout<<"The char you entered is "<<c<<"\n";
	
	//----------------------------------------------
	
	//Operators
	a = 7;
	d = 2;
	
	// printing the sum of a and b
    cout << "a + d = " << (a + d) << endl;

    // printing the difference of a and b
    cout << "a - d = " << (a - d) << endl;

    // printing the product of a and b
    cout << "a * d = " << (a * d) << endl;

    // printing the division of a by b
    cout << "a / d = " << (a / d) << endl;

    // printing the modulo of a by b
    cout << "a % d = " << (a % d) << endl;
    
    //Imagine that b = 2.0;
    b = 2.0;
    cout << "a / b = " << (a / b) << endl;
    
    // ++ and --
    //++ ===== number + 1
    //-- ===== number - 1
    /*Follow the comment below
    a = 5
    ++a; ---> a becomes 6
    a++; ---> a becomes 7
    --a; ---> a becomes 6
    a--; ---> a becomes 5
    ++a increments then returns
    a++ returned then incremented
    */
    // can be used as a++ or ++a, a-- or --a.
    cout <<++a<<" "<<--d<<endl;
    cout <<a++<<" "<<d--<<endl;
    cout <<a<<" "<<d<<endl;
    //other ways of calculation
    int num1 = 1, num2 = 2, num3 = 3;
    num1 = num2; //num1 becomes 2, num2 doesn't change
    num1 += num2; //num1 = num1 + num2
    num1 -= num2; //num1 = num1 - num2
    //same goes for other arithmetic operators as well
    //----------------------------------------------
    
    //Relational operators
    /* 
	==	Is Equal To	3 == 5 gives us false
	!=	Not Equal To	3 != 5 gives us true
	>	Greater Than	3 > 5 gives us false
	<	Less Than	3 < 5 gives us true
	>=	Greater Than or Equal To	3 >= 5 give us false
	<=	Less Than or Equal To	3 <= 5 gives us true
	*/
	//----------------------------------------------
	//Logical Operators
	/*
	&&	expression1 && expression2	Logical AND True only if all the operands are true.
	||	expression1 || expression2	Logical OR True if at least one of the operands is true.
	!	!expression	Logical NOT True only if the operand is false.
	*/
	//----------------------------------------------
	//If-Else operator
	//Imagine a simple grading system. We have a grade and 3 outcomes.
	//If grade is above or equal to 80 we print A, If between 80 and 50 we print B and otherwise C
	int grade1 = 90;
	int grade2 = 60;
	int grade3 = -9999;
	int grade4 = 9999;
	
	if(grade4<100 && grade4 >= 80){
		cout<<"A"<<endl;
	}
	else if(grade1 < 80 && grade1 >=50){
		cout<<"B"<<endl;
	}
	else if(grade1 < 50 && grade1 >=0){
		cout<<"c"<<endl;
	}
	else{
		return(1);
	}
	//Try this for the 4 variables given find any logical errors if there are any and try to fix them.
	//Also talk about else if - else and their benefits.
	return(0);
	//return(0) means that our code is successful but return(1) means that our code has errors.
}
