#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int checkAdult(int age){
		// For newBie
		// if(age>18){
		//     return 1;
		// }
		// else{
		//     return 0;
		// }
		
		// experienced dev
		return age >=18;
}

void giveGrade(int score){
	cout << "Your grade is: ";
	if(score >=80 && score <=100){
		cout << "A";
	}
	else if(score >=60 && score <=79){
		cout << "B";
	}
	else if(score >=50 && score <=59){
		cout << "C";
	}
	else if(score >=45 && score <=49){
		cout << "D";
	}
	else if(score >=25 && score <=44){
		cout << "E";
	}
	else if(score <=25){
		cout << "F";
	}
	else{
		cout << "Invalid score";
	}
	cout << endl;
}


int main(){
		
		/* 
		int age;

		cin >> age;

		if(age >=21){
			cout<< "Your are eligible to drink";
		}
		else if(age < 21 && age >= 18){
				cout << "The person is adult, but can't drink ";
		}
		else{
				cout << "The person is not adult";
		}

		// cout << "The person is adult: " << (checkAdult(age) == 0 ? "False" : "True");
		*/

		// Give grade
		// int score;
		// cout <<"Enter your score:";
		// cin >> score;
		// giveGrade(score);


		// Nested if else
		/* 
		int age;
		cout << "Enter your age: ";
		cin >> age;

		if(age < 18){
			cout << "You are not eligible for job.";
		}else if(age <= 57){
			cout << "You are eligible for job.";
			if(age >=55){
				cout << "retirement time is near";
			}
		}else {
			cout<<"retirement time";
		}
		cout <<endl; */

		// Switch case
		int day;
		cout << "Enter day: ";
		cin >> day;

		switch(day){
			case 1:
				cout << "Monday";
				break;
			case 2:
				cout << "Tuesday";
				break;
			case 3:
				cout << "Wednesday";
				break;
			case 4:
				cout << "Thursday";
				break;
			case 5:
				cout << "Friday";
				break;
			case 6:
				cout << "Saturday";
				break;
			case 7:
				cout << "Sunday";
				break;
			default:
				cout << "Invalid day";
			cout << endl; 
		}





		return 0;
}