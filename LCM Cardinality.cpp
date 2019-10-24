#include<bits/stdc++.h>
using namespace std;
unsigned long long GCD(unsigned long long x,unsigned long long y){
	int r;
	do
    {
		r=x%y;
		x=y;
		y=r;
	}while(r!=0);
	return x;
}
int main()
{
	int n;
	while(scanf("%d",&n)==1){

		if(n==0)
        {
            break;
        }
		if(n==1)
        {
            printf("1 1\n"); continue;
        }
		int sq=sqrt((double)n);
		int m[100000],index;
		int count;
		unsigned long long i,j;
		for(i=1,index=0;i<=sq;i++)
        {
            if(n%i==0)
            {
				m[index++]=i;
				if(i!=n/i)
				{
				    m[index++]=n/i;
				}
			}
        }
		for(i=count=0;i<index;i++)
        {
			for(j=i;j<index;j++)
            {
				if(m[i]/GCD(m[i],m[j])==n/m[j])
                {
					count++;
                }
            }
        }
		printf("%d %d\n",n,count);
	}
	return 0;
}
