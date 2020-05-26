#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m=0,p=0;
    string s;
    char temp;
    cin>>s;
    int k=s.size(); 
    for(int i=0;i<k;i++)
    {
    	temp=s[i];
    	if(s[i]=='$')
        {
        	    continue;
        }
    	for(int j=i+1;j<k;j++)
    	{
    		if(temp==s[j])
    		{
    			m++;
    		   s[j]='$';

    		}
    	}
    }
    p=k-m;
    if(p%2==0)
    {
    	cout<<"CHAT WITH HER!";
    }
  else if(p%2!=0)
    {
    	cout<<"IGNORE HIM!";
    }  
    return 0;
}

