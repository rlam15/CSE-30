#include <iostream>
using namespace std;

int main () {

	   int badNumber;
	   int Typo;

	cout << "Enter the number of lines for the punishment: \n";
    cin >> badNumber;
    
    if (badNumber < 0) {
        return cout<<"You have entered an incorrect value for the number of lines! \n";
        
    }
    
    cout << "Enter the line for which we want to make a typo:";
    cin >> Typo;

        if (Typo < 0) {
        return cout << "You have entered an incorrect value for line typo. \n";
        
    }
    
    for (int i = 0 ;i < badNumber; i++) {
    	if (i == Typo-1) {
    		cout <<"I will always use object oritend programing. \n";
            
    	}
        cout << "I will always use object oritend programming.\n";
    }
    cout <<"\n";
}