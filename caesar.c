#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)

// {
//     string text = "Hello World";
//     int key = get_int("Enter a whole number as a key for the cipher:");

//     for (int i = 0; i < strlen(text); i++)
//     {
//         if (text[i] == ' ')
//         {
//         printf("%c", text[i]);
//         printf(" ");
//         }
//         else
//         {
//         printf("%c", text[i] + key);
//         printf(" ");
//         }
//         // printf(" ");
//     }
//     printf("\n");
// }


int main(int argc, string argv[])
{
    if(argc == 1) {
        printf("ERROR: Expected at least 1 argument\n");
        return 0;
    }
    int key = atoi(argv[1]);
    // printf("%s", argv[1]);
    string text = get_string("Enter a word or phrase you would like to ecrypt: ");

    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", text[i] + key);
    }
    printf("\n");
}


