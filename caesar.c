#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc , string argv[])
{
if (argc != 2)
{
    printf("Usage: ./caesar key \n");
    return 1;
}

for (int i = 0; i < strlen(argv[1]); i++)
{
if(!isdigit(argv[1][i]))
{
printf("Usage: ./caesar key \n");
return 1;
}
}


int key = atoi(argv[1]);
string plaintext = get_string("plaintext: ");
printf("ciphertext: ");

for (int i = 0; i < strlen(plaintext); i++)
{
   char c = plaintext[i];
   if (isupper(c))
    {
        int x = c - 'A';
        int shifted = (x + key) % 26;
        printf("%c", shifted + 'A');
    }

    else if (islower(c))
    {
    int x = c - 'a';
        int shifted = (x + key) % 26;
        printf("%c", shifted + 'a');
    }
    else
    {
        printf("%c" , c);
    }
   }
   printf("\n");
}

