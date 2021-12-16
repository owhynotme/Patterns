#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    while (i <= 4) 
    {
        int j=1;
        while (j <= 4)
        {
            cout << "*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}