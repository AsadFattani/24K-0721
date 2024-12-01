#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name[50];
    int n;

    fgets(name, 50, stdin);

    // works either way
    name[strcspn(name, "\n")] = '\0';
    // name[strlen(name)-1] = "\0";

    printf("\nHello, %s!", name);
    n = atoi (name);
    printf("\nYou entered: %d", n);

    // first one is row(i) and second one is column(j)

    return 0;
}


