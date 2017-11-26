#include <stdio.h>
/*打印华氏与摄氏温度对照表*/
// int main() {
//   int fahr, celsius;
//   float fahrf, celsiusf; // 浮点数
//   int lower, upper, step;

//   lower = 0; // 温度的下限
//   upper = 300; // 温度上限
//   step = 20; // 步长

//   fahr = lower;
//   fahrf = lower;
//   while (fahr <= upper) {
//     celsius = 5 * (fahr  - 32) / 9;
//     celsiusf = 5 * (fahrf  - 32) / 9;
//     printf("%d\t%d\n", fahr, celsius);
//     printf("%3d %6d\n", fahr, celsius); // 指明打印宽度    
//     printf("%3.0f %6.1f\n", fahrf, celsiusf); // 浮点数版本    
//     fahr = fahr + step;
//     fahrf = fahrf + step;
//   }
// }
#define LOWER 0.0
#define UPPER 300.0
#define STEP 10.0
int main () {
  float celsius;
  printf("摄氏与华氏温度对照表\n");

  for (celsius = UPPER; celsius >LOWER; celsius = celsius - STEP)
    printf("%3.0f %6.2f\n", celsius, (celsius / 5.0 * 9.0 + 32));
}