#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        int n;
        cin >> n;

        int winner = 0;
        int quality = 0;

        for(int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a <= 10 && b > quality)
            {
                winner = i;
                quality = b;
            }
        }

        cout << winner << endl;
    }

    return 0;
}
