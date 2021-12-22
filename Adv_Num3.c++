#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = i - 1, count = i, p = n - i + 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= p; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }

    return 0;
}