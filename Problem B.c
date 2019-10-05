#include<stdio.h>
int main()
{
    int a,b,c[100],d=1,i,j,low,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[j]);
        }
        low=c[0];
        for(j=1;j<b;j++)
        {
                 if(c[j]<low)
                    {
                        low=c[j];
                    }
        }
         for(j=0;j<b;j++)
         {
             if(low==c[j])
                count++;
         }
         printf("case %d: %d\n",d++,count);
         count=0;
    }
}
