#include <iostream>
#include <cstring>
#include "stdio.h"
using namespace std;

int main () {

	int sizeArray;
    int numberSearch;
    int holdIndex;
    int Checks = 1;
    int flag = 0;

    

cout << "Enter the size of the array:";
	scanf("%d",&sizeArray);
    if (sizeArray < 0) {
        cout << "ERROR: you entered an incorrect value for the array size! \n";
        return 0;
      }
      int arrayBox[sizeArray];

      cout << "Enter the numbers in the array, seperated by a space, and press enter: \n";
      for (int i = 0; i < sizeArray; i++) {
      	scanf("%d", &arrayBox[i]);
      }
      cout << "Enter a number to search for in the array: \n";
      cin >> numberSearch;

      for (int j = 0 ; j < sizeArray; j++) {
      	if (arrayBox[j] == numberSearch) {
            // cout << "Found value at " << j << endl; Checking flags
            holdIndex = j;
            flag = 1;
      		break;
            
      	}
          Checks++;
      }
    // cout << "Flag: " << flag << endl; Checking flags
    if (flag == 0) {
        cout << "The value " << numberSearch << " was not found in the array\n";
        return 0;
    }
    
    cout << "Found value " << numberSearch << " at index " << holdIndex << " which took " << Checks << " checks \n";
        if (Checks == sizeArray) {
            cout << "We ran into the worst scenario! \n";
        }
    if (Checks == 1) {
        cout << "We ran into the best scenario! \n";
        //return 0;
    }
    
    return 0;
}