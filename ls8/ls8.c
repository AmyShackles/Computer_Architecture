#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include "cpu.h"
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char *argv[])
{
  struct cpu cpu;

  if (argc != 2) {
    fprintf(stderr, "usage: ls8 file.ls8\n");
    return 1;
  }
    cpu_init(&cpu);
    cpu_load(argv[1], &cpu);
    cpu_run(&cpu);

  return 0;
}