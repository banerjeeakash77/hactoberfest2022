// C++ program to check the problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ASCIISIZE 256

int match(string s1, string s2)
{
	// Create array to keep the count of individual
	// characters and initialize the array as 0
	int count[ASCIISIZE] = { 0 };

	// Construct character count array from the input
	// string.
	for (int i = 0; i < s1.length(); i++)
		count[s1[i]]++;

	// Count occurrences of maximum occurring character
	int mx_cnt = 0, mx_chr;
	for (int i = 0; i < ASCIISIZE; i++) {
		if (count[i] > mx_cnt) {
			mx_cnt = count[i];
			mx_chr = i;
		}
	}

	// look if that character is present, the same
	// number of times it is present in second string
	for (int i = 0; i < s2.length(); i++)
		if (mx_chr == s2[i])
			mx_cnt--;
	
	// check if sum is greater or equal to number
	// return 1
	if (mx_cnt == 0)
		return 1;
}

// Driver program to test the above function
int main()
{
	string s1 = "geekforgeeks", s2 = "geekisgeeky";
	if (match(s1, s2))
		cout << "Yes ";
	else
		cout << "No";

	return 0;
}
