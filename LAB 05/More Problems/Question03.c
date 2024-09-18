#include <stdio.h>

int main() {
    char ch, encryptedChar, decryptedChar, key;
    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &ch); 
    
    printf("Enter the encryption key (a single character): ");
    scanf(" %c", &key);

    encryptedChar = ch ^ key;
    printf("Encrypted character: %c\n", encryptedChar);

    decryptedChar = encryptedChar ^ key;
    printf("Decrypted character: %c\n", decryptedChar);

    return 0;
}
