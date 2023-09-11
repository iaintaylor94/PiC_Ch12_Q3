// Program to determine the number of bits in an int on the machine

#include <stdio.h>

// Declare Functions
int int_size (void);

int main(void) {

  printf ("The number of bits in an int on this machine is %d.\n", int_size());
  
  return 0;
}

// Define Functions
int int_size (void) {
  unsigned int test = ~0; // All ones

  int i = 0;
  while (test != 0) {
    test >>= 1;
    i++;
  }

  return i;
}