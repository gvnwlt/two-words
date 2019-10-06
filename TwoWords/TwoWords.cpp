// TwoWords.cpp : Defines the entry point for the console application.
// Asks a user for two words and tells them which is longer 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1, word2; 
	string message = "Word ";
	string longer_than = " is longer than ";
	string equal_to = " is equal to word "; 
	int len1, len2; 


	cout << "Please enter the first word: "; 
	cin >> word1;
	cout << "Now enter the second word: "; 
	cin >> word2; 

	len1 = word1.length(); 
	len2 = word2.length();

	if (len1 > len2)
	{
		message += "1";
		message += longer_than;
		message += "2"; 
	}
	else if (len1 < len2)
	{
		message += "2";
		message += longer_than;
		message += "1";
	}
	else
	{
		message += "1";
		message += equal_to;
		message += "2";
	}

	cout << message << endl; 
	while (true);
    return 0;
}

