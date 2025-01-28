#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printb(int b)
{
    printf("0b");
    for (int x = 0; x < 4; x++)
    {
        printf( (b & 0b1000) ? "1" : "0" );
        b <<= 1;
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    printb(rand() % 0b1111);

	return 0;
}
