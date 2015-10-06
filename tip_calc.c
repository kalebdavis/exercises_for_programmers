// C Tip Calculator example
#include <stdio.h>

int main() {
  int tipRate = 0;
  float billAmount, tip, total = 0.0;
  char inp[100];
  printf("What is the bill amount? ");
  while(scanf("%f", &billAmount) != 1){
    printf("Please enter a valid number for the bill amount.\n");
    scanf("%*s");
  }
  printf("What is the tip rate? ");
  while(scanf("%d", &tipRate) != 1){
    printf("Please enter a valid number for the tip rate.\n");
    scanf("%*s");
  }
  tip = billAmount * (tipRate / 100.0);
  total = billAmount + tip;
  printf("Tip: $%.2f\n", tip);
  printf("Total: $%.2f\n", total);
  return 0;
}

