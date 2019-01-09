#include<stdio.h>
int input(void)
{
    int a;
    int b;
    int x;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    return a,b;
}
int compute(int x)
{
    int a;
    int b;
    x=a+b;
    return x;
}
void output(int m, int n)
{
   printf("%d%d +b is %d%d",m,n);
}
int main(void)
{
   int a=input();
   int b=compute(a);
   output(a,b);
}
