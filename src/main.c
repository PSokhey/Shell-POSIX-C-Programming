#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1024


int main(){

    // for holding input from user.
    char input[MAX_LENGTH];

    // reading input from user.
    printf(">>");
    fgets(input, MAX_LENGTH, stdin);

    printf("you entered %s",input);


    return 0;

}
