#include <iostream>
#include <string>
using namespace std;

// String remove consecutive duplicates C++
void removeDuplicates(string &S) {
	char prev = '\0';
	for (auto it = S.begin(); it != S.end(); it++)
	{
		if (prev == *it) {
			S.erase(it);
			it--;
		}
		else {
			prev = *it;
		}
	}
}

// main function
int main()
{
	string S;
	cin>>S;
	removeDuplicates(S);
	cout << S << endl;

	return 0;
}