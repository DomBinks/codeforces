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

        double x = (1.0 + sqrt(1+(8*n))) / 2;

        cout << ceil(x) << endl;
    }

    return 0;
}
