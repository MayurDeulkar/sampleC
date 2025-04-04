#include <stdio.h>
int main() 
{

  int i, n,next;
  int t1 = 0, t2 = 1;

   next = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series by For Loop: %d, %d ", t1, t2);

  for (i = 3; i <= n; i++) 
  {
    t1 = t2;
    t2 = next;
    next = t1 + t2;
    printf("%d, ", next);
  }

  t1 = 0, t2 = 1;
  next = t1 + t2;
  printf("\nFibonacci Series by while Loop: %d, %d ", t1, t2);

  i = 3;
  while ( i <= n) 
  {
    t1 = t2;
    t2 = next;
    next = t1 + t2;
    printf("%d, ", next);
    i++;
  }

  t1 = 0, t2 = 1;
  next = t1 + t2;
  printf("\nFibonacci Series by Do-while Loop: %d, %d ", t1, t2);

  i = 3;
   do
  {
    t1 = t2;
    t2 = next;
    next = t1 + t2;
    printf("%d, ", next);
    i++;
  }while ( i <= n);
}
