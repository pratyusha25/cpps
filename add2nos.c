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
void output(int m, int n, int x)
{
   printf("%d + %d is %d",m,n,x);
}
int main(void)
{
   int x;
   int a=input();
   int b=compute(a);
   output(a,b,x);
}
