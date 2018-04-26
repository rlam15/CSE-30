#include <iostream>
#include <cstring>
#include "stdio.h"
using namespace std;

int main () {

	int sizeArray;
    int input;

cout << "Enter the size of the array:";
	scanf("%d",&sizeArray);
    if (sizeArray < 0) {
        cout << "ERROR: you entered an incorrect value for the array size! \n";
        return 0;
    }
	int arrayBox[sizeArray];
    bool flag = 0;
    
cout <<"Enter the numbers in the array, separated by a space, and press enter: \n";
    for(int i =0; i<sizeArray; i++)
    {
        scanf("%d",&arrayBox[i]);
        if(i!=0)
            if (arrayBox[i-1] >= arrayBox[i])
                flag = 1;
        
        
    }
    if (flag)
        cout << "This is NOT an increasing array! \n";
    else
        cout << "This is an increasing array! \n";
    for (int i = 0; i < sizeArray; i++) {
        cout << arrayBox[i] << " ";
    }
    cout << endl;
}
