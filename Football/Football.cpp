#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len = s.size();
	int x=1;
	for(int i=0; i<len; i++)
	{
		if(s[i] == s[i+1])
		{
			x++;
			if(x==7)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else x=1;
	}
	cout<<"NO"<<endl;
	return 0;
}

