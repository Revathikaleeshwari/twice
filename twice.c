#include<stdio.h>
int main()
{
int i,num,element[20],result;
printf("Enter the number of elements:");
scanf("%d",&num);
printf("Enter the number of array:");
for(i=0;i<num;i++)
scanf("%d",&element[i]);
result=element[0];
for(i=1;i<num;i++)
result^element[1];
printf("unique elements if %d",result);
return 0;
}
