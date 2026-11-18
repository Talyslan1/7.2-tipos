#include <stdio.h>

typedef union {
    int i;
    unsigned char b[4];
} Bytes;

int main(void)
{
    Bytes u;
    u.i = 0x01020304;

    printf("Bytes: %02X %02X %02X %02X\n",
           u.b[0], u.b[1], u.b[2], u.b[3]);

    if (u.b[0] == 0x04)
        printf("Primeiro byte = 0x04 -> little-endian (o byte menos significativo vem primeiro).\n");
    else
        printf("Primeiro byte = 0x%02X -> big-endian.\n", u.b[0]);

    return 0;
}
