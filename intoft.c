#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Converts inches to feet in the command line
*/

int main(int argc, char** argv) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s [inches to convert to feet]\n", argv[0]);
        return 1;
    }
    double inches = atof(argv[1]);
    printf("%d'%d\"\n", (int)(inches / 12.0), (int)(fmod(inches, 12.0)));
    return 0;
}