#include <iostream>
using namespace std;
int main()
{
	string str = "WELCOME";
	string::iterator it;
	int count = 0;
	for(it = str.begin(); it != str.end(); it ++) 
	{
		*it += 32;
		cout << *it;
	}
	cout << endl;
	return 0;
}
