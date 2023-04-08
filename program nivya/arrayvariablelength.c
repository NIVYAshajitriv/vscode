#include<stdio.h>
int main(){

    int n;
    printf("enter the value of n");

    scanf("%d",&n);
     int a[n],i;
    printf("the values of matrix are %d \n" ,n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    



    printf("enter the reverse value of the matrix\n");
    for ( i = n-1; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
    return 0 ;
}