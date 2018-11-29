Athira Suresh
Roll no:15

#include <stdio.h>
 
int main()
{
  int n, array[1000], c, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
Enter number of elements
5
Enter 5 integers
9 8 5 10 3
Sorted list in ascending order:
3
5
8
9
10
