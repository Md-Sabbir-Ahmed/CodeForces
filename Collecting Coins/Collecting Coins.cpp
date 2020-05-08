#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,n,e,f;
       cin>>a>>b>>c>>n;
       e=(max(a,(max(b,c))));
       f=a+b+c+n;
       if (f%3==0 && f/3>=e)
       {
           cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
   }

