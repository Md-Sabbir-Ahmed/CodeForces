#include<iostream>
using namespace std;
int main()
{
    int a;
    long long m,n;
    cin>>a;
    while(a--)
    {
      cin>>m>>n;
      if(n==1||m==1)
      {
          cout<<"YES"<<endl;
      }
      else if(n==2 && m==2)
      {
          cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }

    }
}
