#include <stdio.h>

typedef struct { int x, y; } Ponto;

void move(Ponto *p, int dx, int dy)
{
    // relembrando, p -> x == (*p).x
    p->x += dx; 
    p->y += dy;
}

int main(void)
{
    Ponto p = {1, 1};

    move(&p, 4, 2);

    printf("(%d, %d)\n", p.x, p.y);
    return 0;
}
