#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int p = n - i + 1, space1 = i - 1;
        int space2 = i - 1,j;
        for (j = 1; j <= p; j++)
        {
            cout << j;
        }
        while (space1)
        {
            cout << "*";
            space1--;
        }
        while (space2)
        {
            cout << "*";
            space2--;
        }
        for (int z = 1; z <= p; z++)
        {
            --j;
            cout << j;
        }

        cout << endl;
    }

    return 0;
}