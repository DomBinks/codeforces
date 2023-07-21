#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n-- > 0)
    {
        char grid[8][8];

        int sy = -1;
        int sx = -1;

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> grid[i][j];

                if(grid[i][j] != '.' && sx == -1)
                {
                    sy = i;
                    sx = j;
                }
            }
        }

        string out = "";
        for(int i = sy; i < 8; i++)
        {
            if(grid[i][sx] == '.')
            {
                break;
            }
            else
            {
                out.push_back(grid[i][sx]);
            }
        }

        cout << out << endl;
    }

    return 0;
}
