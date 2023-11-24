
#include<stdio.h>
void bubblesort(int a[],int n);
void main()
{
int a[10],n,i,j;
printf("enter number of elements:");
scanf("%d",&n);
printf("\nenter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
bubblesort(a,n);
printf("\nSorted array\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void bubblesort(int a[],int n)
{
int temp,i,j;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
}
} 

	

