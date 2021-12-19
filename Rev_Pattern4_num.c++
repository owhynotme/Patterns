#include <iostream>
using namespace std;

int main()
{
    int c=4;
    //    for(int i=1;i<=4;i++)
    //    {
    //        for(int j=4;j>=0;j--)
    //        {
    //            cout<<j;
    //        }
    //        cout<<endl;
    //    }

    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <=4)
        {
            cout << c-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}