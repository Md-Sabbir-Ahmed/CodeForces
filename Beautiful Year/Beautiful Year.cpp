#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int y,m=0,a,b,c,d;
    cin>>y;
    while(true)
    {
    	y++;
    	a=y/1000;
    	b=(y/100)%10;
    	c=(y/10)%10;
    	d=y%10;
    	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    	{
    		cout<<y;
    		break;
    	}
    }
    return 0;
}

