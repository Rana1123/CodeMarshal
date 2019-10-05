#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<=100 && b<=100 && c<=100)
    {
         if(a==b && a==c && b==c)
    {
        printf("Equilateral Triangle\n");
    }
    else if(a!=b && a!=c && b!=c)
    {
        printf("Bad Triangle\n");
    }
    else
    {
         printf("Isosceles Triangle\n");
    }
    }

}
