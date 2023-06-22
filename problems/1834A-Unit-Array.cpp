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

        int pos = 0;
        int neg = 0;
        int ops = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

        while(pos < neg)
        {
            pos++;
            neg--;
            ops++;
        }

        if(neg % 2 != 0)
        {
            neg--;
            ops++;
        }

        cout << ops << endl;
    }

    return 0;
}
