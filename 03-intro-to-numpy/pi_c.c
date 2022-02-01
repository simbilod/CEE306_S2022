// compile and link this code using (in terminal):
//    $ gcc -O3 pi_c.c -o main
// then run:
//    $ ./main

#include <math.h>
#include <stdio.h>
#include <time.h>

int main() {
  int N = 1000000, rep0 = 100, rep = rep0;
  int n;
  double s;
  clock_t t;

  t = clock();
  while (rep > 0) {
    s = 0.0;
    for (n = 1; n <= N; n++) {
      s += 1.0 / ((double)n * (double)n);
    }
    rep--;
  }
  t = clock() - t;

  printf("%.20f\n", sqrt(s * 6.0));

  double time_taken = ((double)t) * 1000.0 / (CLOCKS_PER_SEC * rep0);
  printf("%f ms\n", time_taken);

  return 0;
}