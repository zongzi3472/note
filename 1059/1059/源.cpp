#include <iostream>
using namespace std;

int dao(int n)
{
    int s = 0;
    while (n != 0) 
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() 
{
    int n;
    while (cin >> n && n != 0) 
    {
        if (dao(n) % 2 == 1) 
        {
            cout << n << " ";
        }
    }
    return 0;
}
