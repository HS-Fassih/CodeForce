// Problem Ranking = 800
#include <iostream>
using namespace std;
int main()
{
    string operation = "";
    int lines = 0, x = 0;
    // cout << "Enter the number of lines of operations: ";
    cin >> lines;
    if (lines < 1 || lines > 150)
        return 0;
    // cout << "now enter the operations" << endl;
    for (int i = 0; i < lines; i++)
    {
        cin >> operation;
        if (operation == "X++" || operation == "++X")
            x++;
        else if (operation == "X--" || operation == "--X")
            x--;
        else
        {
            // cout << "invalid operation" << endl;
            return 0;
        }
    }
    // cout << "the final value is: ";
    cout << x;
    return 0;
}