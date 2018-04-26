#include <iostream>
#include <string>
using namespace std;


int main ()
{
    
    string word;
    string revWord;

	cout << "Enter the string to reverse: \n";
		getline(cin,word);
		revWord = word;

	for (int i = 0; i < word.size(); i++) 
	{
		revWord[i] = word[word.size()-i-1];
	}
	cout << "The reverse of the string is: " << revWord << endl;

}

