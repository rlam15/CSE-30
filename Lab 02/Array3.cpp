#include <iostream>
#include <string>

using namespace std;

int row;
int negCount = 0;
string numbers;


int main () {
	cout << "Enter the size of the 2D array: \n";
    cin >> row;
		if (row > 10) {
			cout << "your array is way too large! Enter 1 to 10. \n";
            return 0;
		}
		else if (row < 1) {
			cout << "you have entered an incorrect value for the array size \n";
            return 0;
		}
    
int boardSize [row] [row];

    for (int i = 1; i <= row; i++)
    {
     cout << "Enter the values in the array for row " << i << " seperated by a space, and press enter: \n";
        for (int j = 0; j < row; j++)
        {
        scanf ("%d",&boardSize[i][j]);
        if (boardSize[i][j] < 0){
            negCount++;
        }
    }
}
    if (negCount == 0) {
        cout << "All values are non-negative!";
    } else
     cout << "There are " << negCount << " negative values!\n";
}