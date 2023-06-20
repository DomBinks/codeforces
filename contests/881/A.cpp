#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t-- > 0)
    {
        int n;
        cin >> n;
        
        vector<int> elems;
        for(int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            elems.push_back(e);
        }

        sort(elems.begin(), elems.end());

        int total = 0;
        vector<int>::iterator f = elems.begin();
        vector<int>::reverse_iterator b = elems.rbegin();
        for(int i = 0; i < n/2; i++)
        {
            total += *b;
            total -= *f;
            f++;
            b++;
        }

        cout << total << endl;
    }

    return 0;
}
