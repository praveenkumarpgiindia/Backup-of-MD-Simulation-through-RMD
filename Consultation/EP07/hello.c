/* File: hello.c */

#include <stdio.h>

/*
 * Compile me using the command:
 *     cc hello.c -o hello
 *
 * Run me as:
 *     ./hello sylvain you
 */
int main(int argc, const char* argv[]) {
    for(int i = 1; i < argc; ++i)
        printf("Hello %s\n", argv[i]);

    return 0;
}
