#include <stdio.h>

int main() {
    int input;
    int i = 2;
    printf("Inserisci un numero da verificare: ");
    scanf("%d", &input);
    while (i<=input-1)
    {       
        if (input%i == 0)
        {
            printf("%d non è un numero primo\n", input);
            break;
        } else {
            printf("%d è un numero primo\n", input);
            break;
        }
        i++;
    }
}
