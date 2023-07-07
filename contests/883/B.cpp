#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0)
    {
        vector<string> rows;
        char win = 'a';

        for(int i = 0; i < 3; i++)
        {
            string x;
            cin >> x;
            rows.push_back(x);
        }

        for(int i = 0; i < 3; i++)
        {
            if(rows[0][i] == rows[1][i] && rows[1][i] == rows[2][i])
            {
                win = rows[0][i];
            }

            if(rows[i][0] == rows[i][1] && rows[i][1] == rows[i][2])
            {
                win = rows[i][0];
            }
        }

        if(rows[0][0] == rows[1][1] && rows[1][1] == rows[2][2])
        {
            win = rows[0][0];
        }
        
        if(rows[0][2] == rows[1][1] && rows[1][1] == rows[2][0])
        {
            win = rows[0][2];
        }

        if(win == '.' || win == 'a')
        {
            cout << "DRAW" << endl;
        }
        else
        {
            cout << win << endl;
        }
    }

    return 0;
}
