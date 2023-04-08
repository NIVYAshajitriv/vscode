#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9} ;
       int  i,j,sum =0; 



       //for rows 
       for(i=0;i<=3;i++) 
       {
           for(j=0;j<=3;j++) 
           {
               sum=sum+a[i][j];

           }
            printf("sum of the rows is %d \n",sum);


sum=0;

       } 

//for 
for(j=0;j<=3;j++) 
       {
           for(i=0;i<=3;i++) 
           {
               sum=sum+a[i][j];

           }
            printf("sum of the column is %d \n",sum);

sum=0;

       } 
       return 0;
}