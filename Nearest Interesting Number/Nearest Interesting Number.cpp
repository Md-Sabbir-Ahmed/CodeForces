#include<iostream>
using namespace std;
int main()
{

    int a,i,answer=0,temp;
    cin>>a;
    for(i=a;i<=1200;i++){
    temp=i;
    int sum=0;
    while(temp!=0)
    {
        int r;
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }

      if(sum%4==0)
        {
            answer=i;
            break;
        }

    }
        cout<<answer;
    }

