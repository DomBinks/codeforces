#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        cin >> n;

        vector<long long> elems;
        for(int i = 0; i < n; i++)
        {
            long long e;
            cin >> e;
            elems.push_back(e);
        }

        long long total = 0;
        int switches = 0;

        int back = 0;
        
        while(back < n)
        {
            while(elems[back] >= 0 and back < n)
            {
                total += abs(elems[back]);
                back++;
            }
            if(back == n)
            {
                break;
            }
            else
            {
                switches++;
                total += abs(elems[back]);
                back++;
                while(elems[back] <= 0 and back < n)
                {
                    total += abs(elems[back]);
                    back++;
                }
                if(back == n)
                {
                    break;
                }
            }

        }

        cout << total << " " << switches << endl;
    }

    return 0;
}
