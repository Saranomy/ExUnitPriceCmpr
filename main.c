#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "cmpr.h"

int main() {
  float item1p, item2p;
  long item1q, item2q;

  printf("Item 1:\n\tPrice:    ");
  scanf("%f", &item1p);
  printf("\tQuantity: ");
  scanf("%ld", &item1q);

  printf("Item 2:\n\tPrice:    ");
  scanf("%f", &item2p);
  printf("\tQuantity: ");
  scanf("%ld", &item2q);

  // remove the code below and write your own
  printf("%f %ld vs. %f %ld\n", item1p, item1q, item2p, item2q);
  printf("Exit.\n");
  return 0;
}
