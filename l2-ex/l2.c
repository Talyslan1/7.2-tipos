#include <stdio.h>

typedef struct {
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main(void)
{
    Aluno turma[3] = {
        {"Ana",   9.0f, 9.0f, 9.0f},
        {"Bruno", 7.0f, 8.0f, 6.0f},
        {"Carla", 8.0f, 8.5f, 9.0f}
    };

    int melhor = 0;
    float media_melhor = (turma[0].n1 + turma[0].n2 + turma[0].n3) / 3.0f;

    for (int i = 1; i < 3; i++) {
        float media = (turma[i].n1 + turma[i].n2 + turma[i].n3) / 3.0f;
        if (media > media_melhor) {
            media_melhor = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n", turma[melhor].nome, media_melhor);
    return 0;
}
