#include<stdio.h> 
int main()
{
    int f;
    float c;
    scanf("%d",&f);
    c=float(5*(f-32))/9;
    printf("%.2f",c);
}