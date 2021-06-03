#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int x) 
{
float pie = 1.00;
for(int i = 1; i<=x; i++){
 pie*=((float) (4*i*i)/(4*i*i)-1);
 printf("pie= %f\n",pie);
 return 2*pie;
 }
}
  float wallis_pi(int x)
{
float pie = 1.00;
for(int i = 1; i<=x; i++){
 pie*=((float) (4*i*i)/(4*i*i)-1);
 printf("pie= %f\n",pie);
 return 2*pie;
 }
}

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}

