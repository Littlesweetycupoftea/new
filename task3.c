#include <stdio.h>
  int pereobr(int number);
int main() {
  int num, c;
  puts("Введите номер:");

  while (scanf("%d", & num) == 1) {
    c = pereobr(num);
    printf("%d бит(а)\r\n", c);
    puts("А теперь другой:");
  }
  return 0;

}
int pereobr(int o) {
  int mask = 1;
  int c = 0;
  while (o > 0) {
    c += o & mask;
    o >>= 1;
  }
  return c;

}
