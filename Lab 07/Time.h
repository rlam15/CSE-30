#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <string>


using namespace std;


class Time { //Classes are private by default but not structs where they are public
	public : 
			Time(); //Default constuctor
			Time (int h, int m, int s); //Parametrized constructor
			~Time () {};
			int getHours(); //Accessor for hours
			int getMinutes();
			int getSeconds();

			void setHours(int val); //Mutators for hours
			void setMinutes(int val);
			void setSeconds(int val);

			

		private:
				int hours,minutes,seconds;
};
