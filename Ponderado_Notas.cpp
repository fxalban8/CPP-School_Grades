#include <iostream>
#include <limits>
using namespace std;

/*A student's final grade is the weighted average of three grades:
the practical note that counts 30% of the total,
the theoretical note that counts 60%
and the participation note that counts the remaining 10%.
Write a program that reads a student's three notes from standard input
and write your final grade on standard output.
*/


int main(){
	float practical_note, theoretical_note, participation;	
	cout<<"Enter the practical_note "<<flush;
	cin>>practical_note;

	while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Non-valid input. Enter a float value: "<<flush;
		cin>>practical_note;		
	}	
	

	cout<<"Enter the theoretical_note "<<flush;
	cin>>theoretical_note;

	while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Non-valid input. Enter a float value: "<<flush;
		cin>>theoretical_note;		
	}

	cout<<"Enter the participation_note "<<flush;
	cin>>participation;

	while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Non-valid input. Enter a float value: "<<flush;
		cin>>participation;		
	}

	return 0;
}


