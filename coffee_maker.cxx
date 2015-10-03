#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "ClassWriter.h"

int main(int argc, char *argv[])
{
  FILE *out;
  ClassWriter *class_writer;

  printf("\ncoffee_maker by Michael Kohn\n"
         "http://www.mikekohn.net/\n\n");

  if (argc != 2)
  {
    printf("Usage: %s <filename.class>\n", argv[0]);
    exit(0);
  }

  out = fopen(argv[1], "wb");

  if (out == NULL)
  {
    printf("Could not open %s for writing\n", argv[1]);
    exit(1);
  }

  class_writer = new ClassWriter();


  delete class_writer;

  fclose(out);

  return 0;
}

