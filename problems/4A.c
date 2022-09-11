#include <stdio.h>

int main(int argc, char **argv)
{
    int w; // Store input weight
    scanf("%d", &w);

    if(w == 2) // Special case
    {
        printf("NO\n");
    }
    else // General case
    {
        w % 2 == 0 ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}
