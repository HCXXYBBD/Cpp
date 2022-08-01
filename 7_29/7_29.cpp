#include <iostream>
using namespace std;

int main()
{
    int a = 16;
    int b = 16;
    int c = 0;
    int d = 0;
    c = a >> 1;
    d = b << 1;
    cout << c << '\t' << d;
}