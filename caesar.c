#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string text = "Hello World";
    int key = get_int("Enter a whole number as a key for the cipher:");

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
        printf("%c", text[i]);
        printf(" ");
        }
        else
        {
        printf("%c", text[i] + key);
        printf(" ");
        }
        // printf(" ");
    }
    printf("\n");
}


