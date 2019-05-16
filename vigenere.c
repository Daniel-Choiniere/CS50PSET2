#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

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
    }

    string text = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, j = 0; i < strlen(text); i++, j++)
    {
        // check to see if each character is alpha, if not it will just be printed without encryption at the final else statement
        if (isalpha(text[i]))
        {
            string key = argv[1];
            // get the length of the key
            int key_length = strlen(key);
            // loop back around to beginning of key when the remainder of (j ÷ the keys length) = 0
            int current_key = j % key_length;
            // call the shift function to get the correct ASCII code for the current alpha key char
            int key_looped = shift(key[current_key]);
            // check to see if the character is lower case or uppercase and do some logic to each
            if (islower(text[i]))
            {
                // encrypt the character, loop back to begining of alpahbet using modulo if necessary
                char encryptedChar = (text[i] - 'a' + key_looped) % 26 + 'a';
                printf("%c", encryptedChar);
            }
            if (isupper(text[i]))
            {
                char encryptedChar = (text[i] - 'A' + key_looped) % 26 + 'A';
                printf("%c", encryptedChar);
            }
        }
        // if character is a special symbol and not alpha the character will just be printed as is without encryption
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

int shift(char c)
{
    int converted = c;
    if (islower(c))
    {
        converted -= 97;
    }
    if (isupper(c))
    {
        converted -= 65;
    }
    return converted;
}