#include<stdio.h>
int main()
{
  int arr[7]={1,4,5,6,7,8,9};
  int size=sizeof(arr)/sizeof(arr[0]);
  size=size-1;
  int first_index,last_index,i;
  printf("enter first_indrx");
  scanf("%d",&first_index);
  last_index=size-first_index;
  int temp;
  for(i=0;i<=size;i++)
  {
    if(i==last_index)
    {
      temp=arr[first_index];
      arr[first_index]=arr[last_index];
      arr[last_index]=temp;
    }
  }
    printf("output\n");
  for(i=0;i<=size;i++)
  {
    printf("%d"),arr[i];
  }
  
  return 0;
}

output:
#if
enter first index 1
 1856749
 #endif
