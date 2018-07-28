#include <stdio.h>
#include <time.h>
static int long numSteps = 100000;
int main(){
 double pi = 0; double time = 0;
 // your code
 double F = 4.0, DeltaX = 1.0 / (numSteps+1), x;
 clock_t begin = clock();
 for (int i = 0; i < numSteps; i++){
 // your code
 x = DeltaX* (0.5 + i);
 pi += 4.0 / (1 + x*x);
 }
 //your code
 pi *= DeltaX;
 clock_t end = clock();
 time = (double)(end - begin) / CLOCKS_PER_SEC;
 printf("DeltaX = %f\n", DeltaX);
 printf("PI = %f, duration: %f ms\n", pi, time);
 return 0;
}
