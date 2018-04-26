#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

struct Course
{
	string name, days;
	int credits;
	double avgGrade;
	Time startTime, endTime;
	bool majorRequirement;
};

int main()
{

	ifstream file;

	fIn.open("in.txt" ios:: in);
	
	string content;
	int counter = 1, courseIndex = 0, amount;
	getline(file, content);
	amount = atoi(content.c_str());
	//cout << amount << endl;
	Course courseFiles[amount];
	
	for (int i = 0; i < amount; i++)
	{
		for (int j= 0; j < 7; j++)
		{
			if (j == 0)
			{
				getline(file, content); 
				courseFiles[i].name = content;
			}
			else if (j == 1)
			{
				string temp;
				getline(file, content);
				temp = content;
				courseFiles[i].credits = atoi(temp.c_str());
			}
			else if (j == 2)
			{
				int temp;
				bool tempB;
				getline(file, content);
				temp = atoi(content.c_str());
				if (temp == 0)
				{
					tempB = false;
				}
				else if (temp == 1)
				{
					tempB = true;
				}
				courseFiles[i].majorRequirement = tempB;
			}
			else if (j == 3)
			{
				string temp;
				getline(file, content);
				temp = content;
				courseFiles[i].avgGrade = atof(temp.c_str());
			}
			else if (j == 4)
			{
				getline(file, content);
				courseFiles[i].days = content;
				//cout << courseFiles[i].days << endl;
			}
			else if (j == 5)
			{
				string temp;
				getline(file, content);
				temp = content;
				courseFiles[i].startTime.hours = atoi(temp.substr(0,2).c_str());
				courseFiles[i].startTime.minutes = atoi(temp.substr(3,2).c_str());
				courseFiles[i].startTime.seconds = atoi(temp.substr(6,8).c_str());
			}
			else if (j == 6)
			{
				string temp;
				getline(file, content);
				temp = content;
				courseFiles[i].endTime.hours = atoi(temp.substr(0,2).c_str());
				courseFiles[i].endTime.minutes = atoi(temp.substr(3,2).c_str());
				courseFiles[i].endTime.seconds = atoi(temp.substr(6,8).c_str());
			}

		}
	}
	fIn.close();

	for (int i = 0; i < amount; i++)
	{
		cout << "----------------" << endl << "SCHEDULE OF STUDENT" << endl << "----------------" << endl;

		cout << "COURSE " << (i+1) << ": " << courseFiles[i].name << endl;
		if (courseFiles[i].majorRequirement)
		{
			cout << "Note: this course is a major requirement!" << endl;
		}
		else
		{
			cout << "Note: this course is not a major requirement..." << endl;
		}
		cout << "Number of Credits: " << courseFiles[i].credits << endl;
		cout << "Days of Lectures: " << courseFiles[i].days << endl;
		cout << "Lecture Time: " << setw(2) << setfill('0') << courseFiles[i].startTime.hours << ":" << setw(2) << setfill('0') << courseFiles[i].startTime.minutes << ":"  << setw(2) << setfill('0') << courseFiles[i].startTime.seconds;
		cout << " - " << setw(2) << setfill('0') << courseFiles[i].endTime.hours << ":" << setw(2) << setfill('0') << courseFiles[i].endTime.minutes << ":"  << setw(2) << setfill('0') << courseFiles[i].endTime.seconds << endl;
		cout << "Stats: on average students get " << courseFiles[i].avgGrade << "% in this course." << endl;
	}



	return 0;
}