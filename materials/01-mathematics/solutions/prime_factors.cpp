#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << ' ';
            n = n / i;
        }
    }
    return 0;
}
