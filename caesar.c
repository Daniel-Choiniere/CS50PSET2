#include <cs50.h>
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
            printf("%c", text[i] + key);
        }
        else
        {
             printf("%c", text[i]);
        }
    }
    printf("\n");
}




