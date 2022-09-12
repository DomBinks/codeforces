#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        int len;
        scanf("%d", &len);
        char string[51];
        scanf("%s", string);

        char reversed[51];
        int reversedCounter = 0;
        char *pointer = &string[len-1];
        int i;
        
        while(pointer >= string)
        {
            if(*pointer == '0')
            {
                *pointer = '\0';
                pointer -= 2;
                reversed[reversedCounter++] = atoi(pointer--)  + 96;
            }
            else
            {
                reversed[reversedCounter++] = *pointer-- + 48; 
            }
        }
        
        for(i = 0; i < reversedCounter; i++)
        {
            string[i] = reversed[reversedCounter - i - 1];
        }
        string[i] = '\0';
            
        printf("%s\n", string);
    }

    return 0;
}
