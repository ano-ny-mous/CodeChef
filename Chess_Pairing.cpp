#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rated, unrated, ratedpairs;
        cin >> n >> rated;
        unrated = 2 * n - rated;
        ratedpairs = rated - unrated;
        if (ratedpairs > 0)
        {
            cout << ratedpairs << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
