// Problem Ranking: 800
// There is bug in this program, I would appreciate your contibtion in removing it
#include <iostream>
using namespace std;
int main()
{
    int n = 0, k = 0, score = 0, qualifier = 0, zero = 0; // where 'n' is participants & 'k' is the k_th place
    cin >> n >> k;
    if (k < 1 || k > n || n < 1 || n > 50)
    {
        return 0;
    }
    int *advancer = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cin >> advancer[i];
        else if (i < 0 || i > 100)
            return 0;
        else
        {
            cin >> score;
            if (score <= advancer[i - 1])
                advancer[i] = score;
            else
            {
                // cout << "The next score should be <= the previous score" << endl;
                return 0;
            }
        }
    }
    qualifier = k;
    for (int l = 0; l < n; l++)
    {
        // cout << "In the zero loop" << endl;
        if (advancer[l] == 0)
        {
            zero = l;
            break;
        }
        // cout << advancer[l] << " ";
    }
    // cout << "zero " << zero << " " << qualifier << endl;
    if (advancer[zero] == 0)
    {
        if (zero <= qualifier) // instead of direct zero, non-zero entries before k are qualifiers
        {
            // cout << "The number of advancing participants are: 0";
            // cout << 0;
            cout << zero;
            return 0;
        }
    }
    for (int j = k - 1; j < n; j++) // this fucking loop is problematic
    {
        // cout << "outsied the condition " << advancer[j] << " " << advancer[j + 1] << endl;
        if (advancer[j] <= advancer[j + 1])
        {
            // cout << "in condition" << advancer[j] << " " << advancer[j + 1] << endl;
            // cout << "Qualifier incremented" << endl;
            qualifier++;
        }
        else
            break;
    }
    // cout << "The number of advancing participants are: ";
    cout << qualifier;
    delete[] advancer;
    advancer = NULL;
    return 0;
}