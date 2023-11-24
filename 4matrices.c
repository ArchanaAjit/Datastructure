#include <stdio.h>
#include<stdlib.h>
void addition();
void subtraction();
void multiplication();
int m, n;
int mat1[10][10];
int mat2[10][10];
int mat3[10][10];
int main()
{
printf("\nChoose one option \n1.addition \n2.subtraction \n3.multiplication\n");
int ch;
do
{
printf("\nenter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
addition();
break;
case 2:
subtraction();
break;
case 3:
multiplication();
break;
case 4:
exit(0);
}}
while(ch<4);

}

void addition()
{
//int m, n;
printf("enter order of matrix\n");
scanf("%d %d",&m,&n);
int i, j;
printf("enter elements of matrix 1\n");
//int mat1[m][n], mat2[m][n], mat3[m][n];
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);
}
printf("enter elements of mat 2\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d",&mat2[i][j]);
}
}
//printf("\nResultant matrix\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j]+mat2[i][j];
}
}
printf("\nResultant matrix\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d \t", mat3[i][j]);
}
printf("\n");
}
}
void subtraction()
{

printf("enter the order of matrix\n");
scanf("%d %d",&m,&n);
int i, j;
//int mat1[m][n], mat2[m][n], mat3[m][n];
printf("enter elements of mat 1\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);
}
printf("enter elements of mat 2\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d",&mat2[i][j]);
}}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j]=mat1[i][j]-mat2[i][j];
}
}
printf("\n Resultant matrix\n");

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d\t ", mat3[i][j]);
}
printf("\n");

}
}
void multiplication()
{

//int mat1[10][10], mat2[10][10], mat3[10][10];
int sum = 0;
int p, q, c, d, k;
printf("Enter number of rows and columns of mat1 matrix\n");
scanf("%d%d", &m, &n);
printf("Enter elements of matrix 1\n");

for (c = 0; c < m; c++)
{
for (d = 0; d < n; d++)
{
scanf("%d", &mat1[c][d]);
}}
printf("\nEnter number of rows and columns of mat2 matrix\n");
scanf("%d%d", &p, &q);

if (n != p)
{
printf("\nThe matrices can’t be multiplied with each other.\n");}
else
{
printf("\nEnter elements of matrix2\n");

for (c = 0; c < p; c++){
for (d = 0; d < q; d++){
scanf("%d", &mat2[c][d]);
}}
for (c = 0; c < m; c++)
{
for (d = 0; d < q; d++)
{
for (k = 0; k < p; k++)
{
sum = sum+mat1[c][k]*mat2[k][d];
}

mat3[c][d]=sum;
sum = 0;
}
}

printf("\nProduct of the matrices:\n");

for (c = 0; c < m; c++)
{
for (d = 0; d < q; d++)
{
printf("%d\t", mat3[c][d]);
}
printf("\n");
}
}}
	

	

