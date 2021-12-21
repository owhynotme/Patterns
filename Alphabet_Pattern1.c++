#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;

    // My Method
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == 1)
    //         {
    //             cout << "A";
    //         }
    //         else if (i == 2)
    //         {
    //             cout << "B";
    //         }
    //         else
    //         {
    //             cout << "C";
    //         }
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch;
            ch = 'A' + i - 1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}