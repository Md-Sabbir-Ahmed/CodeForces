#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,in,out,tram=0,max=0;
    cin>>t;
    while(t--)
    {
    	cin>>out>>in;
        tram=(tram+in)-out;
        if(max<tram)
        {
        	max=tram;
        }   	
    }
    cout<<max;
    return 0;
}

