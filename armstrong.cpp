#include <iostream>
using namespace std;
int main()
{
	int n = 153;
	int r, x, sum;
	sum = 0;
	x = n;
	while(n > 0)
	{
		r = n % 10;
		n /= 10;
		sum += r * r * r;
	}
	if (sum == x)
		cout << "The number " << x << " is Armstrong number." << endl;
	else
		cout << "The number is not Armstrong number." << endl;
	return 0;
}
