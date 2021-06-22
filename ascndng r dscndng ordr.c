#include <stdio.h>
int main()
{
  int n, s[1000], a = 1, d = 1, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);
  i = 0;
  while ((a == 1 || d == 1) && i < n - 1)
  {
    if (s[i] < s[i+1])
      d = 0;
     else if (s[i] > s[i+1])
      a = 0;
    i++;
  }
  if (a == 1)
  {
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");
    }
  return 0;
}

#if
5 6 7 8 9 2
the array is not sorted
#endif
