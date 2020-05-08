#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(1<=w<=100)
    {
        if(w%2==0 && w/2>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}
