#include <stdio.h>
// #include "LinkedList.h"
#include "Data.h"

typedef struct {
  int a;
  char b;
} Peso;

int main() {

  uint l = sizeof(Peso);
  int i;
  int pos;

  Peso p;

  Data d;
  DataInit(&d);

  for(i=0; i < 20; i++) {
    p.a = 10 * (i+1);
    p.b = 'a' + i;

    DataInsertAt(&d, 0, &p, l);
  }

  p.a = 0;
  p.b = 'z';

  while(1) {
    scanf("%d", &pos);
    DataAt(&d, pos, &p, l);
    // DataRemoveAt(&d, pos);
    printf("%d, %c.\n", p.a, p.b); 
  }


  return 0;
}