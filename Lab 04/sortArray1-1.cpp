#include <iostream>
#include <stdio.h>

using namespace std;

void sortArr(int arrayBox[], int sizeArray, bool choice) {

	int temp = 0;
	int sIndex = 0;
    
	if (choice == 0) {
 		for (int j = 0; j < sizeArray; j++) {
          sIndex = j;
          for (int k = j; k < sizeArray; k++) {
              if (arrayBox[k] < arrayBox[sIndex]) {
                  sIndex = k;
              }
          }
              temp = arrayBox[j];
              arrayBox[j] = arrayBox[sIndex];
              arrayBox[sIndex] = temp;
      }

	}
	if (choice == 1) {
		 for (int j = 0; j < sizeArray; j++) {
          sIndex = j;
          for (int k = j; k < sizeArray; k++) {
              if (arrayBox[sIndex] < arrayBox[k]) {
                  sIndex = k;
              }
          }
            temp = arrayBox[j];
              arrayBox[j] = arrayBox[sIndex];
              arrayBox[sIndex] = temp;        
      }

	}
}

int main () {

bool choice = 0;
int sizeArray;
int temp = 0;
int sIndex = 0;

cout << "Enter the size of the array: ";
scanf("%d",&sizeArray);
	if (sizeArray == 0) {
		return 0;
	}
int arrayBox[sizeArray];

cout << "Enter the numbers in the array seperated by a space: ";
	for (int i = 0; i < sizeArray; i++) {
		scanf("%d",&arrayBox[i]);
	}
cout << "Sort in Ascending (0) or Descending (1) order: ";
	cin >> choice;

	sortArr(arrayBox, sizeArray, choice);

	for (int i = 0; i < sizeArray; i++) {
		cout << arrayBox [i] << " " ;
	}
	cout << "This is the sorted array in "; printf(choice ? " descending" : " ascending"); cout << " order"; //percent and letter gives another paremeter. picks the first if it's true

	cout << endl;

}