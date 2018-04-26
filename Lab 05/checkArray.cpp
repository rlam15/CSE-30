#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkArraySort(string *arr, int array_size) {
bool ascending, descending;
int ascendingError, descendingError;
	for (int i = 0; i < array_size ; i++) {
		for (int j = i + 1; j < array_size; j++) {
			if (arr[i] < arr[j]) {
				ascending = true;
			} 
			else 
			{
				ascendingError++;
			}
		}
	}
if (ascendingError > 0) {
	ascending = false;
}
	for (int i = 0; i < array_size; i++) {
		for (int j = i + 1; j < array_size; j++) {
			if (arr[i] > arr[j]) {
				descending = true;
			}
			else {
				descendingError++;
			}
		}
	}
if (descendingError > 0) {
	descending = false;
}
	int result = 0;
	if (descending) {
		result = -1;
	}
	else if (ascending) {
		result = 1;
	}
	else {
		return 0;;
	}
	return result;
}


int main()
{
	int array_size;
        cout << "Enter the size of the array: ";
        cin >> array_size;
        string *str = new string;

        cout << "Enter the values of the array, seperated with a space";
        	for (int i = 0; i < array_size; i ++) {
        		cin >> str[i];
        	}

        int ret = checkArraySort(str, array_size);
   
	if(ret==1) {
		cout<<"The array is sorted in ascending order!\n";
	}
	else if(ret ==-1) {
		cout<<"The array is sorted in descending order!\n";
	}
	else {
		cout<<"The array is not sorted!\n";
        return 0;
}
}