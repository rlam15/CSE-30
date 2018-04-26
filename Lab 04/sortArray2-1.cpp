#include <iostream>
#include <stdio.h>

using namespace std;

void sortArr(int arrayBox[], int sizeArray, bool choice) {
	for (int i = 1; i < sizeArray; i++){
		if (choice ? i > 0 &&arrayBox[i] > arrayBox[i-1] : i > 0 &&arrayBox[i-1] > arrayBox[i]) {

			swap(arrayBox[i],arrayBox[i-1]);
			i -= 2;
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
	if (sizeArray = 0) {
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