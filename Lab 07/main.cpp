#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "Time.h"

using namespace std;

bool getTimeFromUser(Time *t) {
	
	string str;
	getline(cin, str);
	int size = 0;
	for(int i = 0; i<8; i++)
		if(((str.c_str()[i]>='0' && str.c_str()[i]<='9') || str.c_str()[i]==':'))
		{
			size++;
		}
		
	for(int i = 0 ; i<size; i++)
		if(!((str.c_str()[i]>='0' && str.c_str()[i]<='9') || str.c_str()[i]==':'))	
			return false;

	t->setHours (atoi(str.substr(0,2).c_str()));
	t->setMinutes (atoi(str.substr(3,5).c_str())); 
	t->setSeconds (atoi(str.substr(6,8).c_str()));

	if(t->getHours()>23||t->getHours()<0||t->getMinutes()>59||t->getMinutes()<0||t->getSeconds()>59||t->getSeconds() < 0)
		return false;
	return true;
}
// -> the same thing for a subclass like t.setHours() but it's a pointer. "Points to"


void print24Hour(Time t) {

	cout << setfill('0')<<setw(2)<< t.getHours()<< ":"<<setw(2)<<t.getMinutes()<<":"<<setw(2)<< t.getSeconds();
}

int main () {
	Time start, end;
	
	cout <<"Enter a start time using 24 hours format. (HH:MM:SS): ";

		bool isValid = getTimeFromUser(&start); 
		if (!isValid) {
			cout << "The time entered for the start is invalid \n";
			return 0;
		}

		cout <<"Enter an end time using 24 hours format. (HH:MM:SS): ";
		isValid = getTimeFromUser(&end);


		if (!isValid) {
			cout << "The time entered for the end value is invalid \n";
			return 0;
		}

		cout << "The start time is ";
		print24Hour(start);
		cout << " and the end time is ";
		print24Hour(end);
		cout <<endl;
	


 }