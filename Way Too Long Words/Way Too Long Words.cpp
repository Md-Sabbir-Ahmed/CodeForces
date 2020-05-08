#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        a=str.size();
        if(a>10)
        {
            cout<<str[0]<<a-2<<str[a-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
}
