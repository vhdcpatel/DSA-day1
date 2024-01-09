#include<iostream>
using namespace std;

int main() {
	char alphabate;
	cin >> alphabate;


	if(int(alphabate) >= 65 && int(alphabate) <= 90){
		cout<<1;
	} else if(int(alphabate) >= 97 && int(alphabate) <= 122){
		cout<<0;
	} else {
		cout<<-1;
	}	
}
