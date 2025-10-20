#include <stdio.h>
#include <string.h>

struct territorio {
    char nome[30];
    char cor[10];
    int tropas;
};
typedef struct territorio territorio;

int main() {
     territorio lista[5];
     int i;

     for(i=0; i<5; i++) {
        printf("Insira os dados do Território (%d):\n ",i+1);
        printf("Nome:");
        scanf("%s", lista[i].nome);

     }

}