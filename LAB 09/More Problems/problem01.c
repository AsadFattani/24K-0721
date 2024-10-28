#include <stdio.h>
#include <string.h>

void is_Palindrome(char str[10]){
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < strlen(str)/2; i++){
        if (str[i] == str[length-i-1]){
            count++;
        }
    }

    if (count == (strlen(str)/2)){
        printf("Palindrome");
    }else{
        printf("not Palindrome");
    }
}


int main() {
    char str[10];

    printf("Enter a string to check: ");
    scanf("%s", str);

    strlwr(str);

    is_Palindrome(str);
    
    return 0;
}


