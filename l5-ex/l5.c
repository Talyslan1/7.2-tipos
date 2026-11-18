#include <stddef.h>
#include <stdio.h>

typedef struct { 
    char a;
    int b;
    char c;
} Ruim;

typedef struct  { 
    int b;
    char a;
    char c;
} Bom;

int main(void)
{
    printf("Ruim: sizeof = %zu\n", sizeof(Ruim));
    printf("  offset a = %zu\n", offsetof(Ruim, a));
    printf("  offset b = %zu\n", offsetof(Ruim, b));
    printf("  offset c = %zu\n", offsetof(Ruim, c));

    printf("Bom:  sizeof = %zu\n", sizeof(Bom));
    printf("  offset b = %zu\n", offsetof(Bom, b));
    printf("  offset a = %zu\n", offsetof(Bom, a));
    printf("  offset c = %zu\n", offsetof(Bom, c));

    printf("\nRuim: a em 0, 3 bytes de padding, b em 4, c em 8, 3 bytes de padding no fim (12).\n");
    printf("Bom:  b em 0, a em 4, c em 5, 2 bytes de padding no fim (8).\n");
    return 0;
}
