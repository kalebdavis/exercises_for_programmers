// C Currency Conversion
#include <stdio.h>
#include <string.h>

int main() {
  convert_anything();
  return 0;
}

int convert_euros() {
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

int convert_anything() {
  char *countries[5] = { "britain", "canada", "france", "australia", "utopia" };
  float rates[5] = { 154.707, 76.79, 113.27, 72.6, 300};
  char countryFrom[16];
  float amountTo, amountFrom, rateFrom = 0.0;
  float rateTo = 100;
  printf("How many bills are you exchanging?\n");
  while(scanf("%f", &amountFrom) != 1){
    printf("Needs to be in format 00.00\n");
    scanf("%*s");
  }
  printf("What country are you from?\n");
  while(scanf("%s", &countryFrom) != 1){
    printf("Needs to be a string\n");
    scanf("%*s");
  }
  int index;
  printf("Country from: %s\n", countryFrom);
  for(index = 0; index < 5; index++){
    if(strcmp(countries[index],  countryFrom) == 0){
      rateFrom = rates[index];
      break;
    }
  }
  if(rateFrom == 0.0){
    printf("We don't have your country on file, sorry\n");
  }
  else{
    amountTo = (amountFrom * rateFrom) / rateTo;
    printf("%.2f euros at an exchange rate of %.2f is\n%.2f U.S. dollars.\n", amountFrom, rateFrom, amountTo);
  }
  return 0;
}
