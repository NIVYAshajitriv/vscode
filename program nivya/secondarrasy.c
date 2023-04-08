
#include<stdio.h>
int main()
{
    int a[4] = {1,2,3,4};
    int i;
for(i=0;i<=3;i++){
    printf(" %d",a[i]);
   } 

printf("\n reverse are");

for(i=3;i>=0;i--){
    printf(" %d",a[i]);
    
}
  return 0 ;
}