#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        
        int aTime = abs(a - 1); 
        int bTime = abs(b-c) + abs(c-1);

        if(aTime < bTime)
        {
            printf("1\n");
        }
        else if(bTime < aTime)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}
