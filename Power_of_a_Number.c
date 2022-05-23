#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,num3,sol,fin;
    scanf("%d%d%d",&num1,&num2,&num3);
    sol=pow(num1,num2);
    fin=sol%num3;
    printf("%d",fin);
}