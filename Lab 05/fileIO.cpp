#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main (){

ifstream file; 

file.open ("words_in.txt");
int count = 0;
string *words;
string spacePusher;

if (file.eof()) {
	return 0;
}

while (!file.eof()) {
	file >> spacePusher;
	count ++;
}
file.close();

words = new string[count];

file.open("words_in.txt");

	for (int i = 0; i < count; i++) {
		file >> words[i];
	}
	
file.close();

ofstream fileOut;

fileOut.open("words_out.txt");
	for (int i = 0; i < count; i++) {
		fileOut << words[i] << "\n";
	}
	return 0;
}