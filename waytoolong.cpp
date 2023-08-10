// Problem Ranking: 800
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string longword = "";
    char check = 't';
    int lines = 0, j = 0;
    /*
    while (1)
    {
        cout << "Enter the number of lines: ";
        cin >> lines;
        if (!((lines >= 1) && (lines <= 100)))
        {
            cout << "\nERROR: Lines should be between 1-100" << endl;
        }
        else
            break;
    }
    */
    // cout << "Enter the number of lines: ";
    cin >> lines;
    if (!((lines >= 1) && (lines <= 100)))
    {
        // cout << "\nERROR: Lines should be between 1-100" << endl;
        return 0;
    }

    string *words = new string[lines];
    int *letters = new int[lines];
    for (int i = 0; i < lines; i++)
    {
        while (1)
        {
            // cout << "\nEnter the word number " << i + 1 << " ";
            cin >> longword;
            j = 0;
            check = 't';
            while (longword[j] != '\0')
            {
                if (!((longword[j] >= 97) && (longword[j] <= 122)))
                {
                    // cout << "\nERROR: There shouldn't be any capital letter" << endl;
                    check = 'f';
                    // break;
                    return 0;
                }
                j++;
            }
            if (!((j >= 1) && (j <= 100)))
            {
                // cout << "\nERROR: Word letter count should be between 1-100";
                //  continue;
                return 0;
            }
            if (check == 't')
            {
                *(letters + i) = j;
                break;
            }
        }
        *(words + i) = longword;
    }

    for (int k = 0; k < lines; k++)
    {
        longword = *(words + k);
        if (*(letters + k) > 10)
            cout << longword[0] << *(letters + k) - 2 << longword[*(letters + k) - 1] << endl;
        else
            cout << longword << endl;
    }
    return 0;
}