#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        cin >> n;
 
        int sum = 0;
 
        vector<int> as(n);
        for(int &i : as)
        {
            cin >> i;
            sum += i;
        }
 
        bool p = true;
        for(int i : as)
        {
            if((sum - i) % 2 == i % 2)
            {
                cout << "YES" << endl;
                p = false;
                break;
            }
        }
 
        if(p)
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
