#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //asking the user for input
    char name[100];
    printf("What is your name? ");
    fgets(name, 100, stdin);

    //greet user
    printf("Hello %s\n", name);
    return 0;

}