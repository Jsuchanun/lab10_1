#include<iostream>
using namespace std;

int main(){
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int totalstu = 0;
	char grade;
	
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << totalstu + 1 << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		
		if(grade == 'A'){ // if grade is A
			count[0]++;
			totalstu++;  //Do something
		}else if(grade == 'B'){ // if grade is B
			count[1]++;
			totalstu++; //Do something
		}else if(grade == 'C'){ // if grade is B
			count[2]++;
			totalstu++;
		}else if(grade == 'D'){ // if grade is B
			count[3]++;
			totalstu++;
		}else if(grade == 'F'){ // if grade is B
			count[4]++;
			totalstu++;	//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl; //Do something
		} 
	
	    
	}while(true);
	
	
	cout << "In total " << totalstu << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}