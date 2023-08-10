// Problem Ranking = 800
#include <iostream>
using namespace std;
int main()
{
    int M = 0, N = 0, domino = 0;
    cin >> M >> N;
    if (M < 0 || M > N || N > 16)
        return 0;
    int blocks = M * N;
    domino = blocks / 2;
    cout << domino;
    return 0;
}