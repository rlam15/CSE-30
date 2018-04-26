#include <iostream>
using namespace std;

int main () {
    int badNumber;
	cout << "Enter the number of lines for the punishment:";
    cin >> badNumber;

    if (badNumber < 0) {
        cout<<"You have entered an incorrect value for the number of lines!";
        }
    
    for (int i = 0 ;i < badNumber; i++) {
        cout << "I will always use object orientated programming.\n";
    }
    cout <<"\n";
}

    
    
    
    
    /*if (badNumber >= 0) {
	for (int i = 0; i < badNumber; i++) {
		cout << "I will always use object orientated programming. ";
    } else if (badNumber < 0){
        cout << "You have entered an incorrect value for the number of lines!";
    }
}
return 0;
}
*/
