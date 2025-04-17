#include "modsyn.hpp"
#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>

int main(int argc, char **argv){

  if (argc != 3) {
      printf("Usage: %s <patch> <name>\n", argv[0]);
      return 1;
  }

  const char* patch = argv[1];
  const char* name = argv[2];

  ModSyn modsyn= ModSyn(patch,
                        name);
  
  return 0;
}
