#include<iostream>
using namespace std;

int main()
{

    int k,n,w,sum=0;
    cin>>k>>n>>w;
    sum=((w*(w+1)*k)/2);
    if (sum-n<0)
    {
        cout<<("0");
    }
    else
    {
        cout<<(sum-n);
    }
}

