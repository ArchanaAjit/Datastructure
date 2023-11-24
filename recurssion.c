#include<stdio.h>
int sum(int n);
int main()
{
int n,f;
printf("enter a positive integer:");
scanf("%d",&n);
f= fact(n);
printf("factorial of %d = %d \n",n,f);
return 0;
}
int fact(int n)
{
int f;
if (n>=1)
{
f=n*fact(n-1);
return f;
}
else
{
return 1;
}
}

