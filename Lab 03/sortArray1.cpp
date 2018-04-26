#include <iostream>
#include <cstring>
#include "stdio.h"
using namespace std;

int main () {

    int sizeArray;
    int temp = 0;
    int sIndex = 0;
    
    

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

      for (int j = 0; j < sizeArray; j++) {
          
          sIndex = j;

          for (int k = 1; k < sizeArray; k++) {
              
              if (arrayBox[j] > arrayBox[k]) {
                  
                  sIndex = k;

                  
              }
              temp = arrayBox[j];
              arrayBox[j] = arrayBox[sIndex];
              arrayBox[sIndex] = temp;
          }
          
      }
    
  cout << "This sorted array is in ascending order: \n";
  for (int k = 0; k < sizeArray; k++) {
    cout << arrayBox[k] << " ";
  }
    cout << endl;
    cout << "The algorithm selected the minimum for the traverse of the array.\n";
    
}




