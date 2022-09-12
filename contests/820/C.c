#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getIndex(char letter)
{
    return letter - 96;
}

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        char string[200001];
        scanf("%s", string);
        int stringLen = strlen(string);

        int cost = abs(getIndex(string[0]) - getIndex(string[stringLen-1])); 
        int path[200000];
        int m;
          

    }

    return 0;
}
