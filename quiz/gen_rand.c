#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printb(int b)
{
    for (int x = 0; x < 4; x++)
    {
        printf( (b & 0b1000) ? "1" : "0" );
        b <<= 1;
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    argc--;
    argv++;

    if (argc == 0)
    {
        srand(time(NULL));// ^ getpid());
        int r = rand() % 16;
        printb(r);
    }

	return 0;
}
