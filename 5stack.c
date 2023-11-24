#include<stdio.h>
#include<stdlib.h>
#define n 50
int a[n],top=-1;
void push()
{
if(top==n-1)
 {
 printf("Stack overflow\n");
 }
else
 {
 top++;
 printf("enter the element :");
 scanf("%d",&a[top]);
 }
}
void pop()
{
 if (top==-1)
 {
  printf("Stack underflow\n");
 }
 else
 {
  printf("\n%d is deleted",a[top]);
  top--;
 }
}
void display()
{
 if(top==-1)
 {
  printf("stack underflow\n");
 }
 else
 {
  for(int i=top;i>=0;--i)
  {
   printf("%d \t",a[i]);
  }
 }
}
void main()
{
int ch;
printf("Choose an option\n1.push\n2.pop\n3.display\n");
do
{
printf("\nenter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
       push();
       break;
case 2:
       pop();
       break;
case 3:
       display();
       break;
case 4:
      exit(0);
}}
while(ch<4);
}         
