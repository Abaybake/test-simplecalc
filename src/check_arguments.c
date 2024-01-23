#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "check_arguments.h"
#include "addition.h"

void check_arguments(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if(strcmp(argv[i], argv[2]) == 0) {
                printf("Operator: %s\n", argv[i]);
            } else {
                printf("Operand:  %s\n", argv[i]);
            }
        }
    } else {
        printf("No additional command-line arguments were passed.\n");
    }

    switch (*argv[2])
    {
    case '+':
        addition(atoi(argv[1]), atoi(argv[3]));
        break;
    
    default:
        break;
    }
}