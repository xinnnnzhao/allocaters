#include <stdio.h>
#include <stdlib.h>


int main() {
  int * ptr;

  ptr = (int *) malloc(sizeof(int));

  fprintf(stderr, "ptr is %p\n", ptr);
}
