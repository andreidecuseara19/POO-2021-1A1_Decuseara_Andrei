#include "NumberList.h"

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	else
	{
		this->numbers[this->count] = x;
		this->count++;
	}
}

void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
	{
		cout << numbers[i]<<' ';
	}
	cout << endl;
}

void NumberList::Sort()
{
	for (int i = 0; i < this->count - 1; i++)
	{
		for (int j = 0; j < this->count - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
				swap(numbers[j], numbers[j + 1]);
		}
	}
}