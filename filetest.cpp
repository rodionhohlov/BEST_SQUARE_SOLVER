#include <TXLib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    char x[40] = {};
    char *st = {};
    double a = NAN;
    FILE *fp = fopen("minitst.txt", "r");
    fscanf(fp, "%s", x);
    if (strcmp(x, "NAN") == 0) {
        printf("ты гей\n");
    }
    else
        a = strtod(x, &st);
        printf("Ты натуурал");
    printf("%lg", a);
    return 0;
}
