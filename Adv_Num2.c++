#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        while (space)
        {
            cout << " ";
            space--;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}