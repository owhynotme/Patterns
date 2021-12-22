#include<iostream>
using namespace std;
 
 
int main()
{
   int n;
    cout << "Enter num\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char c='A'+i-1;
        for(int j=1;j<=n;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    
  
 return 0;
}