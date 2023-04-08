#include<stdio.h>
int main()
{
int a[20][20],b[20][20],mul[20][20];

int r,c,i,j;

printf(" enter the rows and columns ");
scanf("%d %d",&r,&c);

printf("enter the first matrix");
for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
    scanf("%d",&a[i][j]);
    }
} 
printf("enter the second matrix");
for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
    scanf("%d",&b[i][j]);
    }
}
// for multiplication
for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
     mul[i][j]=a[i][j] + b[i][j];
    }

}

// reultss

printf(" show matrix a");

for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
     printf("%d",a[i][j]);
    }
     printf("\n");
}

printf(" show matrix b");

for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
     printf("%d",b[i][j]);
    }
            printf("\n");

}
printf(" show matrix multiplication");

for ( i = 0; i < r; i++)
{
    for (j = 0; j < c; j++)
    {
     printf("%d",mul[i][j]);
    }
        printf("\n");
}
return 0;

}