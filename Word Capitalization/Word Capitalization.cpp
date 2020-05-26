#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string c;
    cin>>c;
    int k=c.size();
    if (c[0]>='a' && c[0]<='z')
    	{
    		c[0]=c[0]-32;
    		for(int i=0;i<k;i++)
    		{
    			cout<<c[i];
    		}
    	}
    else
    {
    	for(int i=0;i<k;i++)
    		{
    			cout<<c[i];
    		}
    }
    return 0;
}

