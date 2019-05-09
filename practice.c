
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "daniel";

    for (int i = 0, length = strlen(name); i < length;  i++)
    {
        printf("%c", name[i]);
    }
    printf("\t");
    for (int i = strlen(name); i > -1; i--)
    {
        printf("%c", name[i]);
    }
}
