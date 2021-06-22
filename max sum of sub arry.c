#include<stdio.h>
int main()
{
int arr[5]={1,-2,3,-1,2};
printf("max sum of sub array\n");  
int largest=array[0];
for(int i=0;i<5;i++)
{
int sum=0;
for(int j=i;j<5;j++)
{
sum=sum+arr[j];
if(sum>largest)
{
largest=sum;
}
}
}
printf("%d",largest);
return 0;
}

output:
#if
max sum of sub array 4
#endif  
