#include<iostream>
using namespace std;
 
 
int main()
{
   int n;
   char ch,c='A';
    cout << "Enter num\n";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ch=c+(i+j-2);
            cout<<ch;
        }
        cout<<endl;
    }
  
 return 0;
}