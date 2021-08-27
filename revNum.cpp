#include <iostream>
using namespace std;
int main()
{
	int x = 1724;
	int r;
//	while (x > 0)
	for(; x > 0;)
	{
		r = x % 10;
		x = x / 10;
		cout << r;
	}
	cout << endl;
	return 0;
}
