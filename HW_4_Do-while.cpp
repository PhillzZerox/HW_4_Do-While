#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char grade;
	int  a = 0, total = 0, Round = 0;
	float gpa = 0.0;
	
	cout << "Only input Grade : A,a, B,b, C,c, D,d, F,f" << endl;
	cout << endl;
	
	do
	{
		cout << "Enter the letter grade(Enter 'X' to Exit)" << endl;
		cin  >> grade;
			
		if(grade== 'A' || grade == 'a') a+=4;
		else if(grade == 'B' || grade == 'b') a+=3;
		else if(grade == 'C' || grade == 'c') a+=2;
		else if(grade == 'D' || grade == 'd') a+=1;
		else if(grade == 'F' || grade == 'f') a+=0;
		else if((grade == 'X') || (grade == 'x'))break ;
		else cout << "Only input grade is : A,a, B,b, C,c, D,d, F,f " <<Round--<< endl;
		Round++;
	}
	while(grade != 'x' && grade != 'X');
	
	gpa = (float)a/Round;
	
	cout << "Total Grade Points : " << a <<endl;
	cout.precision(3);
	cout << "GPA : " << gpa << endl;
	
	return(0);
}