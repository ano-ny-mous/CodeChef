#include <iostream>
using namespace std;

int main()
{
    int r1, r2, d1, d2, finalRating1, finalRating2;
    cin >> r1 >> r2 >> d1 >> d2;
    finalRating1 = r1 + d1;
    finalRating2 = r2 + d2;

    if (finalRating1 > finalRating2)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }
    return 0;
}
