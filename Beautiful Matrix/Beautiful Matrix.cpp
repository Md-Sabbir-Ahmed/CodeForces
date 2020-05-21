#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,a=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a;
            if(a==1)
            {
                cout<<abs(i-3)+abs(j-3);
            }
        }
    }
    return 0;
}


