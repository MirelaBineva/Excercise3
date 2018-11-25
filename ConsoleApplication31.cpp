// ConsoleApplication31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//broi sreshtaniq na simvol v tekst
	char str[101];
	cout << "Enter text: ";
	cin.getline(str, 100);
	cin.ignore();
	int length = strlen(str);
	char c;
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (str[i] == c)
		{
			counter++;
		}
	}
	cout << counter;
	//histograma na broq sreshtaniq na vs bukvi ot lat azbuka
	char str[101];
	cout << "Enter text: ";
	cin.getline(str, 100);
	cin.ignore();
	int length = strlen(str);
	int alphabet[] = "ABC...abc";
	int hist[52] = { 0 };
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				++hist[j];
				break;
			}
		}
	}
	for (int j = 0; j < 52; j++)
	{
		cout << alphabet[j] << "->" << hist[j];
	}
	//broi sreshtaniq na glasna
	char str[101];
	cout << "Enter text: ";
	cin.getline(str, 100);
	cin.ignore();
	int length = strlen(str);
	char cons[] = "auoyei";
	int hist[6] = { 0 };
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (str[i] == cons[j])
			{
				++hist[j];
				break;
			}
		}
	}
	for (int j = 0; j < 6; j++)
	{
		cout << cons[j] << "->" << hist[j];
	}

	//broi ploshtadki v tekst
	char str[101];
	cout << "Enter text ";
	cin.getline(str, 100);
	cin.ignore();
	int length = strlen(str);
	int counterWords = 1;
	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			counterWords++;
		}
	}
	cout << counterWords;
	//nai-dulga ploshtadka v tekst
	char str[101];
	cout << "Enter text: ";
	cin.getline(str, 100);
	cin.ignore();
	int counter = 0;
	int max = -1;
	int length = strlen(str);

	for (int i = 0; i < length; i++) 
	{
		if (str[i] != ' ') 
		{
			counter++;
		}
		else
		{
			if (counter > max) max = counter;
			counter = 0;
		}
	}
	if (counter > max) max = counter;
	cout << "Max: " << max;
	
	//nai-chesto sreshtan simvol
	int array[255] = { 0 }; 
	char str[101];
	cout << "Enter text: " << endl;
	cin.getline(str, 101);
	cin.ignore();
	int max, index;

	for (int i = 0; str[i] != 0; i++)
	{
		++array[str[i]];
	}
	max = array[0];
	index = 0;
	for (int i = 0; str[i] != 0; i++)
	{
		if (array[str[i]] > max)
		{
			max = array[str[i]];
			index = i;
		}
	}
	cout << "Most used char: " << str[index];

	return 0;
}

