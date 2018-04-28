#include <stdio.h> 
#include <math.h>

  int tr(char bin[]);

int main(void) {
  printf("%i\n", tr("01001011"));
  return 0;
}

int tr(char bin[]) {
  int z;
  int bin_i[8];

  for (int i = 0; i <= 7; ++i) {
    if (bin[i] == '1')
      bin_i[i] = 1;
    else bin_i[i] = 0;
  }

  z = bin_i[0] * pow(2, 7) + bin_i[1] * pow(2, 6) 
    + bin_i[2] * pow(2, 5) + bin_i[3] * pow(2, 4) 
    + bin_i[4] * pow(2, 3) + bin_i[5] * pow(2, 2) 
    + bin_i[6] * pow(2, 1) + bin_i[7] * pow(2, 0);

  return z;
}
