#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count[5] = {};
	int i=1;
	char grade; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do
	{
		cout << "Student [" << i << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A')
			{
				count[0]++ ;
			}  // if grade is A
			//Do something
		else if(grade == 'B') 
		{
			count[1]++ ;
		} // if grade is B
			//Do something
		//and so on ... for grade = C, D, F	
		else if(grade == 'C') 
		{
			count[2]++ ;
		}
		else if(grade == 'D') 
		{
			count[3]++ ;
		}
		else if(grade == 'F') 
		{
			count[4]++ ;
		}
		else{ // grade is wrong input
			//Do somethingc
			cout << "Wrong input. Please input again.";
		} 
		i++;
	}while(i!=0 );

	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
	}
	

