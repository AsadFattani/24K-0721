#include <stdio.h>
#include <string.h>

int main() {

    char str[5][10] = {"Asad", "Omer", "Aaraiz", "Affan", "Mr Aashir" };
    char word[10];
    int found = 0;

    printf("Enter a word to search: ");
    fgets(word, sizeof(word), stdin);
    // to gets spaces prefered ^

    // scanf("%s", &word);

    for (int i = 0; i < 5; i++) {
        if (strncmp(word, str[i], 10) == 0) { 
            found = 1;
            printf("Found\n");
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }
    
    
    return 0;
}


