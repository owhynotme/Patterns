#include <iostream>
using namespace std;

int main()
{
    int n, val;
    cout << "Enter num\n";
    cin >> n;
    // for(int i=1;i<=n;i++)
    // { val=i;
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<val;
    //         val--;
    //     }
    //     cout<<endl;
    // }
    
    int i = 1;
    while (i <= n) //While loop
    {
        val = i;
        int j = 1;
        while (j <= i)
        {
            cout << val;
            val--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}