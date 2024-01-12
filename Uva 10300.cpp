#include<stdio.h>
int main()
{
     int a,b,c,T,i,j,n,sum;
     while(scanf("%d",&T)!=EOF)
     {
         for ( i=0;i<T;i++)
        {

        sum=0;
            scanf("%d",&n);
         for (j=0;j<n;j++)
            {scanf("%d%d%d",&a,&b,&c);
            sum+=a*c;}
            printf("%d\n",sum);}
     }
}
