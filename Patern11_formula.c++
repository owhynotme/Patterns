#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (i - j + 1);
    //     }
    //     cout << endl;
    // }
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i - j + 1);
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}