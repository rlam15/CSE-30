#include "HTable.h"
#include <iostream>
#include <iomanip>

HTable :: HTable() 
{
	max_size = 23;
	dt = new data[23];
	for (int i = 0; i < 23; i++) 
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
	numel = 0;
} 

HTable :: HTable(int t_size) 
{
	max_size = t_size;
	dt = new data[max_size];
	for (int i = 0; i < max_size; i++) 
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
	numel = 0;
}

int HTable :: hash(int &k) 
{
	return k % max_size;
}

int HTable :: rehash (int &k) 
{
	return ((k+1) % max_size); 
}

int HTable :: add(data &d) 
{
	int h = hash(d.key);
	if (dt[h].key == -1) 
	{
		dt[h] = d;
		numel++;
		return 0;
	}
	else 
	{
		for (int i = 1; i < max_size; i++) 
		{
			h = rehash(h);
			if (dt[h].key == -1) { 
				dt[h] = d;
				numel++;
				return 0;

			}
		}
		return -1;
	}
}

int HTable :: remove (data &d) 
{
	int h = hash(d.key);
	if (dt[h].key == d.key) 
	{
		dt[h].key = -1;
		dt[h].value = "N/A";
		numel--;
		return 0;
	}
	else 
	{
		for (int i = 1; i < max_size; i ++) 
		{
			h = rehash(h);
			if (dt[h].key == d.key) 
			{
				dt[h].key = -1;
				dt[h].value = "N/A";
				numel--;
				return 0;

			}
		}
		return -1;
	}
}

void HTable::output() 
{
	for (int i = 0; i < max_size; i++) 
	{
	cout << i << " -> " << dt[i].key << " " << dt[i].value << "\n";
	}
}







