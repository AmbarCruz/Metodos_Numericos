#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int freq[26] = {0}; // Inicializar todos los valores en 0
    
    printf("Introduce una palabra: ");
    scanf("%s", word);
    
    int len = strlen(word);
    
    // Contar frecuencia de cada letra en la palabra
    for (int i = 0; i < len; i++) {
        freq[word[i] - 'a']++;
    }
    
    // Mostrar frecuencia de cada letra
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("La letra %c aparece %d veces en la palabra.\n", 'a' + i, freq[i]);
        }
    }
    
    return 0;
}