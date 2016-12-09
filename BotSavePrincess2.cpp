#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here------------------------------------------------------
    int pIx, pIy;
    for(int i =0; i < grid.size(); i++)
        for(int j = 0; j < grid[i].size(); j++)
        {
            if(grid[i][j] == 'p') {pIx = i; pIy = j;}
        }
    if(abs(r-pIx) > abs(c-pIy))
    {
        if(r < pIx){
           cout << "DOWN\n";
           r ++;
        }
        else if(r > pIx){
            cout << "UP\n";
            r--;
        }
    }
    else
    {
        if(c < pIy){
            cout << "RIGHT\n";
            c++;
        }
        else if(c > pIy){
            cout << "LEFT\n";
            c--;
        }
    }    
    //---------------------------------------------------------------------
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
