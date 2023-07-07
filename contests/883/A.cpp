#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        cin >> n;

        int total = 0;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a > b)
            {
                total++;
            }
        }
    
        cout << total << endl;
    }

    return 0;
}
