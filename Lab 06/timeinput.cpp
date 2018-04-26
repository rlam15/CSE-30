#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>


using namespace std;

struct Time  {
	int hours;
	int minutes;
	int seconds;
};

bool getTimeFromUser(struct Time *t) {
	
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

	int hours = atoi(str.substr(0,2).c_str());
	int minutes = atoi(str.substr(3,5).c_str()); 
	int seconds = atoi(str.substr(6,8).c_str());

	if(hours>23||hours<0||minutes>59||minutes<0||seconds>59||seconds < 0)
		return false;
	return true;
}



void print24Hour(struct Time t) {

	cout << setfill('0')<<setw(2)<<t.hours<< ":"<<setw(2)<<t.minutes<<":"<<setw(2)<< t.seconds;
}

int main () {
	struct Time start, end;
	
	cout <<"Enter a start time using 24 hours format. (HH:MM:SS): ";

		bool isValid = getTimeFromUser(&start); 
		if (!isValid) {
			cout << "The time entered for the start is invalid \n";
			return 0;
		}
	cout <<"Enter an end time using 24 hours format. (HH:MM:SS): ";
		bool isvald = getTimeFromUser(&end);
		if (!isValid) {
			cout << "The time entered for the end value is invalid";
			return 0;
		}
		cout <<"The start time is: ";
		print24Hour(start);
		cout <<"The end time is " ;
		print24Hour(end);

 }