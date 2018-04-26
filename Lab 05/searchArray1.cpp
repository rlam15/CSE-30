#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int checkArray(string arr[], int size) //returns 1 for ascended sorted, 0 for unsorted, & -1 for descending sorted
{
	bool ascending, descending;
	int ascError = 0, descError = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				ascending = true;
			} 
			else 
			{
				ascError++;
			}
		}
	}
	if (ascError > 0)
	{
		ascending = false;
	}
	
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				descending = true;
			} 
			else 
			{
				descError++;
			}
		}
	}
	if (descError > 0)
	{
		descending = false;
	}
	
	//cout << ascending << " " << descending << endl; //test for result
	
	int answer = 0; //sorting return value to determine whether it is sorted or not and of which order.
	if (ascending)
	{
		answer = 1;
	}
	else if (descending)
	{
		answer = -1;
	}
	else
	{
		answer = 0;;
	}
	
	return answer;
}

int binarySearchR(string arr[], string value, int max)
{
	int min = 0, mid = 0;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (arr[mid] == value)
		{
			return mid + 1;
		}
		else if (arr[mid] > value)
		{
			max = mid - 1;
		}
		else
		{
			min = mid + 1;
		}
	}
	return -1;
}

int main()
{
	ifstream file("C:/Users/Anhduy Tran/Documents/CSE30/searchArray1/key_list.txt"); //opens text document
	int counter = 0;
	string word;
	file >> word;
	counter++;
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> word;
			counter++;
			//cout << word; // prints out values on file to see if fstream read file correctly
		}
		file.close();
	}
	//cout << counter << endl; //prints out value of counter

	ifstream ifile("C:/Users/Anhduy Tran/Documents/CSE30/searchArray1/key_list.txt");
	string arr[counter];
	if (ifile.is_open())
	{
		for(int i = 0; i < counter; ++i)
		{
			ifile >> arr[i];
		}
	}

	/*for (int i = 0; i < counter; i++) //prints values of array
	{
		cout << arr[i] << " ";
	}
	cout << endl; */
	if (checkArray(arr, counter) != 1)
	{
		//cout << "Array is not sorted in ascending order."; // check value of checkArray();
		return 0;
	}
	string value;
	cout << "Enter key you wish to search for in the file: ";
	cin >> value;
	
	if (binarySearchR(arr, value, counter) == -1)
	{
		cout << "The key " << value << " was not found in the array!";
	}
	else 
	{
		cout << "Found key " << value << " at index " << binarySearchR(arr, value, counter);
	}
	
	return 0;
}