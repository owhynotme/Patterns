#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num\n";
    cin >> n;
    // for (int i = 1; i <= n; i++) // Experiment
    // {
    //     int space = n - 1;

    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     cout<<endl;
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        int space = n - i; //Space calculate 3-1= 2 Space
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}