// C Currency Conversion
#include <stdio.h>

int main() {
  float amountTo, amountFrom, rateFrom = 0.0;
  float rateTo = 100;
  printf("How many euros are you exchanging?\n");
  while(scanf("%f", &amountFrom) != 1){
    printf("Needs to be in format 00.00\n");
    scanf("%*s");
  }
  printf("What is the exchange rate?\n");
  while(scanf("%f", &rateFrom) != 1){
    printf("Needs to be in format 00.00\n");
    scanf("%*s");
  }
  amountTo = (amountFrom * rateFrom) / rateTo;
  printf("%.2f euros at an exchange rate of %.2f is\n%.2f U.S. dollars.\n", amountFrom, rateFrom, amountTo);
  return 0;
}
