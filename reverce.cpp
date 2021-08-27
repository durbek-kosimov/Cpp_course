#include <iostream>
using namespace std;
int main()
{
	int m = 153, r, rev = 0;
	int n = m;
	while(n > 0) 
	{
		r = n % 10;
		n /= 10;
		rev = rev * 10 + r;
	}
	cout << m << " is reverced " << rev << endl;
	return 0;
}
