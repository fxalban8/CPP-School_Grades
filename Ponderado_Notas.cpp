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

void verifying(float& a);




int main(){
	float final_grade;
	float practical_note, theoretical_note, participation;	
	cout<<"Enter the practical_note "<<flush;
	cin>>practical_note;

	while(!cin||practical_note<0||practical_note>10){
		verifying(practical_note);
	}	
	

	cout<<"Enter the theoretical_note "<<flush;
	cin>>theoretical_note;

	while(!cin||theoretical_note<0||theoretical_note>10){
		verifying(theoretical_note);
	}

	cout<<"Enter the participation_note "<<flush;
	cin>>participation;

	while(!cin||participation<0||participation>10){
		verifying(participation);
	}

	final_grade=practical_note*0.3 + theoretical_note*0.6 + participation*0.1;
	cout<<"Your final grade is "<<final_grade<<endl;


	return 0;
}


void verifying(float& a){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"Non-valid input. Enter a correct value: "<<flush;
	cin>>a;
}
