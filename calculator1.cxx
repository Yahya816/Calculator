#include <stdio.h>

int main() {

  char oprator;
  double first, second;
  
  printf("\tuse oprator (+),(-),(*),(/) \n\n");
  printf("type like this 1+2 : ");
  scanf("%lf%c%lf",&first ,&oprator,&second);
  printf("\n THE ASWER IS  : ");

  
  switch (oprator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    
    default:
      printf("Error! operator is not correct");
  }
  printf("\n\n\t\t\t\t     - made by YAHYA\n\n");

  return 0;
}
