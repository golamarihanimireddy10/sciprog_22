#include <stdio.h>
int main() {
  int i, n;
  // giving the first and second terms
  int a = 0, b = 1;
  int m = a+b;
  printf("Enter the number of terms for getting the fibonacci series: ");
  scanf("%d", &n);
  printf("The numbers in fibonacci series are: %d, %d, ", a,b);
  // print from 3 to n terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", m);
    a=b;
    b = m;
    m = a+b;
  }

  return 0;
}
