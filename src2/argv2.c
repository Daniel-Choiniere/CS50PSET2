// Printing characters in an array of strings

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // iterate over the strings in the argv
    for (int i = 0; i < argc; i++)
    {
        // iterate over each character in argv[i]
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}
