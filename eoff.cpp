#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << EOF << endl;
    cout << NULL << endl;
//    cout << nullptr << endl;
    int x = 10, y = 20;
    int c = 100, d = 200;
    cout << x << ' ' << y << endl;
    swap(&x, &y);
    cout << x << ' ' << y << endl;
    cout << c << ' ' << d << endl;
    swap2(c, d);
    cout << c << ' ' << d << endl;
    return 0;
}
