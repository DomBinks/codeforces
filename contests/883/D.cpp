#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n, d, h;
        cin >> n >> d >> h;

        long double area = 0.5 * d * h;

        long long next;
        cin >> next;
        for(int i = 0; i < n-1; i++)
        {
            long long y = next;
            cin >> next;

            if(y+h <= next)
            {
                area += 0.5 * d * h;
            }
            else
            {
                area += 0.5 * (next-y) * (2 * (d - next-y));
            }
        }

        printf("%0.7Lf\n", area);
    }

    return 0;
}
