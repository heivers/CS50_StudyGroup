#include<stdio.h>
#include<stdlib.h>

void create_pyramid(int);

int main(void)
{
    char *string;
    int height;
    //get a height from the user between 1 and 8
    do
    {
        printf("Height: ");
        scanf("%s", string);
        height = atoi(string);
    }
    while (height < 1 || height > 8);

    create_pyramid(height);
    
}

//function to draw the pyramid
void create_pyramid(int height)
{
    int i;
    int j;
    int k;
    int x;

    //first loop creates the row
    for (i = 1; i <= height; i++)
    {
        //this loop pads from the left
        for (j = height; j > i; j--)
        {
            printf(" ");
        }
        
        //this loop prints the desired number of #'s
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        //the last loop just prints the desired number of #'s again
        for (x = 0; x < i; x++)
        {
            printf("#");
        }
        
        printf("\n");

    }
}
