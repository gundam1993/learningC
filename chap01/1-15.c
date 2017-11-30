#include <stdio.h>
/*打印华氏与摄氏温度对照表*/
#define LOWER 0.0
#define UPPER 300.0
#define STEP 10.0

float celsiusToFahr (float celsius) {
  return (celsius / 5.0 * 9.0 + 32);
}

int main () {
  float celsius;
  printf("摄氏与华氏温度对照表\n");

  for (celsius = UPPER; celsius >LOWER; celsius = celsius - STEP)
    printf("%3.0f %6.2f\n", celsius, celsiusToFahr(celsius));
}