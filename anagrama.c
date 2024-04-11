#include <stdio.h>
#include <string.h>

int saoAnagramas(const char* stringA, const char* stringB) {
    int contadorA[26] = {0}, contadorB[26] = {0};
    int i;

    for (i = 0; stringA[i] != '\0'; i++) 
        contadorA[stringA[i] - 'a']++; 

    for (i = 0; stringB[i] != '\0'; i++) 
        contadorB[stringB[i] - 'a']++;

    for (i = 0; i < 26; i++) 
        if (contadorA[i] != contadorB[i]) 
            return 0; 

    return 1; 
}

int main() {
    const char* A = "algoritmo";
    const char* B = "logaritmo";
    
    if (saoAnagramas(A, B)) {
        printf("\"%s\" e \"%s\" são anagramas.\n", A, B);
    } else {
        printf("\"%s\" e \"%s\" não são anagramas.\n", A, B);
    }

    return 0;
}
