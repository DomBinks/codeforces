#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int t;
    scanf("%d", &t);
    while(t-- > 0)
    {
        int length;
        scanf("%d", &length);

        string out;

        if(length % 2 == 0)
        {
            int j = 10;

            out.append(to_string(j));
            j = -j;

            for(int i = 1; i < length; i++)
            {
                out.append(" ");
                out.append(to_string(j));
                j = -j;
            }

            cout << "YES" << endl << out << endl;
        }
        else if(length != 3)
        {
            string x = to_string(-((length / 2) - 1));
            string y = to_string(length / 2);

            out.append(x);
            for(int i = 1; i < length; i++)
            {
                out.append(" ");

                if(i % 2 == 0)
                {
                    out.append(x);
                }
                else
                {
                    out.append(y);
                }
            }

            cout << "YES" << endl << out << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}