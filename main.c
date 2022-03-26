#include <stdio.h>

int main(void) {
  int value = 50;
  int *pointer = &value;

  printf("O valor da variavel é %d  \n", value);
  printf("O endereço da variavel é %p  \n", &value);

  printf("=====================================================\n");

  printf("O valor da variaval que o ponteiro aponta é %d  \n", *pointer);
  printf("O valor que o ponteiro armazena é %p  \n", pointer);
  printf("O endereço do ponteiro é %p  \n", &pointer);
  
  return 0;
}