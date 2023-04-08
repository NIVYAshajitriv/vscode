#include<stdio.h>
int main(){
    
int a[6][6],i,j,n,m;
printf("enter rows :");

scanf("%d",&n);

printf("enter clmn:");
scanf("%d",&m);

printf("enter 2d array are");

for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
{



   scanf(" %d",&a[i][j]);

}

}
printf("2d array are");

for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)


{
   printf(" %d",a[i][j]);
}
printf(" \n ");
}
return 0 ;
}