#include<stdio.h>
int main()
{

    int k,n,w,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    sum=((w*(w+1)*k)/2);
    if (sum-n<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",sum-n);
    }

}

