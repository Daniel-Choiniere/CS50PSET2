#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
     // next two if statements check to see if the user command line input is a single string of alphabetical characters
    if (argc == 1 || argc > 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isalpha(argv[1][i])))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
        printf("success\n");
    }


    // int key = atoi(argv[1]);
    // string text = get_string("plaintext: ");

    // printf("ciphertext: ");
    // for (int i = 0; i < strlen(text); i++)
    // {
    //     // check to see if each character is alpha, if not it will just be printed without encryption at the final else statement
    //     if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
    //     {

    //         // subtract 'a' from your original lower-case char
    //         // then add the key
    //         // then take %26 of the result
    //         // then add 'a' back again

    //         // check to see if the character is lower case or uppercase and do some logic to each
    //         if (islower(text[i]))
    //         {
    //             char encryptedChar = (text[i] - 'a' + key) % 26 + 'a';
    //             printf("%c", encryptedChar);
    //         }

    //         if (isupper(text[i]))
    //         {
    //             char encryptedChar = (text[i] - 'A' + key) % 26 + 'A';
    //             printf("%c", encryptedChar);
    //         }
    //     }

    //     // if character is a special symbol and not alpha the character will just be printed as is without encryption
    //     else
    //     {
    //         printf("%c", text[i]);
    //     }
    // }
    // printf("\n");
}

// int shift(char c)
// {
//   // TODO
// }