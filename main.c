#include <stdio.h>
#include <stdlib.h>

int moltiplicazioneIterativa(int a, int b);
int moltiplicazioneRicorsiva(int a, int b, int *cont);

int main(int argc, char** argv) {
    int a, b;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci a, il primo fattore (intero): ");
    scanf("%d", &a);
    printf("Inserisci b, il secondo fattore (intero non negativo): ");
    scanf("%d", &b);
    
    rIterativo = moltiplicazioneIterativa(a, b);
    rRicorsivo = moltiplicazioneRicorsiva(a, b, &b);
    
    printf("%d * %d = %d (formulazione iterativa)\n", a, b, rIterativo);
    printf("%d * %d = %d (formulazione ricorsiva)\n", a, b, rRicorsivo);
    return (EXIT_SUCCESS);
}

int moltiplicazioneIterativa(int a, int b) {
    int p = 0;
    for(; b > 0; b--) {
        p += a;
    }
    return p;
}
int moltiplicazioneRicorsiva(int a, int b, int *cont) {
    int ris = 0;
    printf("chiamata numero %d\n", *cont - b);
    
    if (b == 0) {
        
       return ris; 
    }
    else {
       ris =  a + moltiplicazioneRicorsiva( a, b - 1, cont);
    }
}
// Stack Overflow :42988