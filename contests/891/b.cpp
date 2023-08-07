#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        string num;
        cin >> num;

        num.insert(num.begin(), '0');

        int k = -1;
        for(int i = num.size() - 2; i >= 0; i--)
        {
            if(num[i+1] >= '5')
            {
                if(num[i] < '9')
                {
                    k = i;
                    num[i]++;
                }
                else
                {
                    for(int j = i-1; j >= 0; j--)
                    {
                        if(num[j] < '9')
                        {
                            k = j;
                            num[j]++;
                            break;
                        }
                    }
                }

                num[k+1] = 0;
                i = k;
            }
        }

        if(k == -1)
        {
            k = num.size();
        }

        if(num[0] != '0')
        {
            cout << num[0];
        }

        for(int i = 1; i < num.size(); i++)
        {
            if(i <= k)
                cout << num[i];
            else
                cout << '0';
        }
        cout << endl;
    }

    return 0;
}
