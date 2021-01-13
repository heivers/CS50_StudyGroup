#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool is_valid(int arr[], int);
int main(void)
{
    char str[100];
    int arr[100];
    

    //get user input
    printf("Number: ");
    scanf("%s", str);
    
    //set len variable for easier looping
    int len = strlen(str);
    
    //put the digits into an array of integers
    for (int i = 0; i < len; i++)
    {
        arr[i] = (int)(str[i] - 48);
    }
    
    //Check if card can be valid
    if (is_valid(arr, len) == true)
    {
        //printf("The value was True\n");
        if (arr[0] == 4)
        {
            printf("VISA\n");
        }
        else if (arr[0] == 3 && (arr[1] == 4 || arr[1] == 7))
        {
            printf("AMEX\n");
        }
        else if (arr[0] == 5 && (arr[1] > 0 && arr[1] < 6))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        //printf("The value was false");
        printf("INVALID\n");
    }
       
    
}

//this function calculates the checksum. If it ends with 0 it returns true, else false
bool is_valid(int arr[], int len)
{
    int checksum = 0;
    int num;
    for (int i = len - 2; i >= 0; i = i - 2)
    {
        
        num = arr[i] * 2;
        //printf("%d\n", num);
        while (num > 0)
        {
            int digit = num % 10;
            checksum = checksum + digit;
            num /= 10;
        }
    }
    for (int i = len - 1; i >= 0; i = i - 2)
    {
        //printf("%d\n", num);
        checksum = checksum + arr[i];
    }
    //printf("%d\n", checksum);
    
    if (checksum % 10 == 0 && len >= 13)
    {
        //printf("Returning True\n");
        return true;
    }
    else
    {
        return false;
    }
    
}