#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int gcd(int a, int b) // Using Euclid's algorithm
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
   return (a*b) / gcd(a,b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int c = 0; c < t; c++)
    {
        int n;
        scanf("%d", &n);

        int count = 0; // Count for the number of pairs
        for(int i = 1; i <= n; i++)
        {
            // Loop over each pair (only 1 combination as rule will
            // hold both ways)
            for(int j = i; j <= n; j++)
            {
                if(j > (3*i) || i > (3*j)) // Break if i or j is 3
                {                          // times bigger than the
                    break;                 // other
                }
                // Pairs always divide to give 1, 2, or 3
                if(j / i == 1 || j / i == 2 || j / i == 3)
                {
                    // Check the rule
                    if(lcm(i, j) / gcd(i,j) <= 3) 
                    {
                        if(i == j)
                        {
                            // Only 1 combination if both the same
                            count++;
                        }
                        else
                        {
                            // 2 combinations if they are different
                            count += 2;
                        }
                    }
                }
           }
        }

        printf("%d\n", count);
    }

    return 0;
}