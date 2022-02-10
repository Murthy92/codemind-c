#include<stdio.h>
int main()
{
    int n,temp,b;
    scanf("%d", &n);//6=
    temp=n;
    while(temp!=0)
    {
        b=temp%10;
        printf("%d",b);
        temp=temp/10;
    }
}