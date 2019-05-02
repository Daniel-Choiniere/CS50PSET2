#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 1 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
        return 0;
    }
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        if( (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <='Z'))
        {
            char encryptedChar = text[i] + key;

            if (text[i] )

            // printf("%c", encryptedChar);
            // printf("%c", text[i] + key);
        }
        else
        {
             printf("%c", text[i]);
        }
    }
    printf("\n");
}




// char c = s[i] + key;
// if s[i] is a lowercase letter
//     if c > 'z'
//         c = 'a' + c -'z' -1
// else if s[ i ] is upper case letter
//     . . .