#include <stdio.h> 
#include <string.h>
void reverseWords(char sentence[]) {
    char reversed[100] = "";// Array to hold the reversed sentence 
    char word[20]; // Temporary array to hold each word 
    int length = 0;

    
    // Missing code: Loop through the sentence to extract words and store them in reversed
    int i, j = 0, k = 0;
    length = strlen(sentence);

    for (i = length - 1; i >= 0; i--) {
        if (sentence[i] == ' ' || i == 0) {
            if (i == 0) {
                word[j] = sentence[i];
                j++;
            }
            word[j] = '\0';
            strcat(reversed, word);
            strcat(reversed, " ");
            j = 0;
        } else {
            word[j] = sentence[i];
            j++;
        }
    }




    // copy it back 
    reversed[strlen(reversed) - 1] = '\0'; // Remove the last space 
    strcpy(sentence, reversed); 
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 
    reverseWords(sentence); 
    printf("Reversed sentence: %s\n", sentence); 
    return 0;
}