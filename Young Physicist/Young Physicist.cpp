#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,x,y,z,sumx=0,sumy=0,sumz=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        sumx=sumx+x;
        sumy=sumy+y;
        sumz=sumz+z;

    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}


