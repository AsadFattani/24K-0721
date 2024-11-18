#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("program.txt", "w");
    
    fprintf(file, "Hello, World!\n");
    fclose(file);
}    