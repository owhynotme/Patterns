#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space) // Space 1st Triangle
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i) // 2nd Triangle
        {
            cout << j;
            j++;
        }
        int p = 1, c = i - 1;
        while (c) // 3rd Triangle
        {
            cout << c;
            c--;
        }
        cout << endl;
        i++;
    }

    return 0;
}