#include<stdio.h>
int add(int a,int b)
{
int s;
s=a+b;
printf("sum = %d \n",s);
return 0; 
} 
int difference(int a,int b)
{
int di;
di=a-b;
printf("difference = %d \n",di);
return 0;
} 
int product(int a,int b)
{
int p;
p=a*b;
printf("product = %d \n",p);
return 0;
}
int division(int a,int b)
{
int d;
d=a/b;
printf("ans = %d \n",d);
return 0;
}
int modulus(int a,int b)
{
int m;
m=a%b;
printf("remainder = %d \n",m);
return 0;
}

void main()
{
 int x,y;
 int op;
printf("1.ADDITION \n");
printf("2.SUBTRACTION \n");
printf("3.MULTIPLICATION \n");
printf("4.DIVISION \n");
printf("5.MODULUS \n");
 printf("Enter two numbers:\n");
 scanf("%d%d",&x,&y);
 do
 {
 printf("enter your choice: \n");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
        add(x,y);
        break;
 case 2:
        difference(x,y);
        break;
 case 3:
        product(x,y);
        break;
case 4:
        division(x,y);
        break;        
case 5:
        modulus(x,y);
        break;
case 6:
     exit(0);
 }
}
                
 while(op<6);
 }       
        
 
 
