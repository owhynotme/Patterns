#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
            i + 1;
        }
        cout << endl;
    }

    return 0;
}