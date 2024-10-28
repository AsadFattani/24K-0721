#include <stdio.h>
#include <string.h>

// In this approach we are using temp as the middle man and using by ref till the end
// Another approach could be creating a variable and using for loop to copy(strcpy) the end values and reversing it 
// Another approach could be using recursions

void reverseStr(char *str){
    int length = strlen(str), 
    start = 0, 
    end = length - 1;

    while (start < end){

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("The reverse string is: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);\
    str[strcspn(str, "\n")] = '\0';

    reverseStr(str);
    
    return 0;
}



