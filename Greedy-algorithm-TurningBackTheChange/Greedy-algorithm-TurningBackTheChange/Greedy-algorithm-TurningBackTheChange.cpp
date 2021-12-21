#include <iostream>

using namespace std;

int main()
{
    // N is the money count that you have to turn back.
    // N always multiplication of 10.
    // Your coins are value of 500, 100, 50, 10. 

    int n_N;
    int n_totalCount, n_count_500, n_count_100, n_count_50, n_count_10;

    int narr_coinTypes[]{ 500, 100, 50, 10 };

    cout << "Amount of money that you need to turn back : ";
    cin >> n_N;

    for (int i = 0; i < sizeof(narr_coinTypes)/sizeof(int); i++)
    {
        switch (i)
        {
        case 0:
            n_count_500 = n_N / narr_coinTypes[i];
            n_N %= narr_coinTypes[i];
            cout << "500 coin count : " << n_count_500 << endl;
            break;
        case 1:
            n_count_100 = n_N / narr_coinTypes[i];
            n_N %= narr_coinTypes[i];
            cout << "100 coin count : " << n_count_100 << endl;
            break;
        case 2:
            n_count_50 = n_N / narr_coinTypes[i];
            n_N %= narr_coinTypes[i];
            cout << "50 coin count : " << n_count_50 << endl;
            break;
        case 3:
            n_count_10 = n_N / narr_coinTypes[i];
            n_N %= narr_coinTypes[i];
            cout << "10 coin count : " << n_count_10 << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

    n_totalCount = n_count_500 + n_count_100 + n_count_50 + n_count_10;
    cout << "Total coin count : " << n_totalCount << endl;

    return 0;
}

