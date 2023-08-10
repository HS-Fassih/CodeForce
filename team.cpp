// Problem Ranking: 800
// There is bug in this program, I would appreciate your contibtion in removing it
#include <iostream>
using namespace std;
int main()
{
    int members = 3, problems = 0, pov = 0, attempts = 0;
    // cout << "Enter the numbers of problems: ";
    cin >> problems;
    if (!(problems >= 1 && problems <= 100))
        return 0;
    int **team = new int *[problems];
    for (int i = 0; i < problems; i++)
    {
        team[i] = new int[members];
    }
    // cout << "\nNow enter the POVs of each of the three members:" << endl;
    for (int i = 0; i < problems; i++)
    {
        // cout << "Problem No: " << i << endl;
        for (int j = 0; j < members; j++)
        {
            // cout << "Member No: " << j << endl;
            cin >> pov;
            if (pov == 1 || pov == 0)
                team[i][j] = pov;
            else
            {
                // cout << "\nThe POV must be in 0s and 1s" << endl;
                return 0;
            }
            /*
            while (1)
            {
                cin >> pov;
                if (pov == 1 || pov == 0)
                {
                    team[i][j] = pov;
                    break;
                }
                else
                    cout << "\nThe POV must be in 0s and 1s" << endl;
            }
            */
        }
        if ((team[i][0] + team[i][1] + team[i][2]) >= 2)
        {
            // cout << "Attempt increased" << endl;
            attempts++;
        }
    }
    /*
    for (int i = 0; i < problems; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << team[i][j] << " ";
        }
        cout << endl;
    }
    */
    // cout << "\nThe number of problems to be solved are: ";
    cout << attempts << endl;
    for (int j = 0; j < problems; j++)
    {
        delete[] team[j];
    }
    delete[] team;
    team = NULL;
    return 0;
}