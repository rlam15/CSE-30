#include <iostream>
#include <cstring>

using namespace std;

 string randomWord;
 string combinedWord;
 string saved;
 int printTimes;


string combineStr(string randomWord, int printTimes) {
    

    combinedWord = randomWord;
    for (int i = 1; i < printTimes ; i++){
        combinedWord = combinedWord + randomWord;
        
    }
    return combinedWord;
}

int main() {
	cout << "Enter a string:\n ";
	cin >> randomWord;
    
	cout << "Enter a number of times:\n ";
	cin >> printTimes; 
    
    if (printTimes == 0) {
        return 0;
    }
    
    combinedWord =  combineStr(randomWord, printTimes);
    cout << "The resulting string is: \n";
        cout << combinedWord;
    cout << endl;
    return 0;
}




