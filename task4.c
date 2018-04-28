#include <stdio.h>
  int bit_two(int num, int bit);

int main(void) {
  int n, bit;
  puts("Ваше число: ");
  scanf("%d", & n);
  puts("Какой по счёту бит: ");
  scanf("%d", & bit);
  printf("%d\r\n", bit_two(n, bit));
  return 0;
}
int bit_two(int n, int bit) {

  int mask = 1;
  mask <<= bit;
  return (n & mask);
}
