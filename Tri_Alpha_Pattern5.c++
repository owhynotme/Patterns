#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch, c = 'A';
    cout << "Enter num\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch = c + i-1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}