#include<stdio.h>
int main()
{
    int a,m,n;
    scanf("%d",&a);
    for(int i=0;i<a;i++)

      {
      scanf("%d %d",&m,&n);
      if(n==1||m==1)
      {
          printf("YES\n");
      }
      else if(n==2 && m==2)
      {
          printf("YES\n");
      }
      else{
          printf("NO\n");
      }

    }
}

