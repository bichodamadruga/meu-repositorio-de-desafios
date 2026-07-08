#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    //Invertendo uma string
    char fraseOriginal[22]= "a base do teto desaba";
    char fraseInvertida[22];
    printf( "A frase que irá ser invertida é: %s.\n\n", fraseOriginal);
    
    int i, j = 0;
    for(i =strlen(fraseOriginal)-1; i >= 0; i--) {
       
        if(fraseOriginal[i] == ' ') {
            continue;
        }
        
        if(j == 14 || j == 9 || j == 6 || j == 1) {
            fraseInvertida[j] = ' ';
            j++;
        }
            
        fraseInvertida[j] = fraseOriginal[i];
        
        j++;
        
       
        
    }
    fraseInvertida[j] = '\0';
    printf("A frase invertida é idêntica a original, basta adaptar os espaços entre cada palavra:\n %s.", fraseInvertida);
       
    
    
    
    return 0;
    
}