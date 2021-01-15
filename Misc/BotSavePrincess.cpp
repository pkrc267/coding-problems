#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
   int bIx, bIy, pIx, pIy;
    for(int i =0; i < grid.size(); i++)
        for(int j = 0; j < grid[i].size(); j++)
        {
            if(grid[i][j] == 'm') {bIx = i; bIy = j;}
            if(grid[i][j] == 'p') {pIx = i; pIy = j;}
        }
    while(bIx != pIx){
        if(bIx < pIx){
            cout << "DOWN\n";
            bIx ++;
        }
        else if(bIx > pIx){
            cout << "UP\n";
            bIx--;
        }
    }
    while(bIy != pIy){
        if(bIy < pIy){
            cout << "RIGHT\n";
            bIy++;
        }
        else if(bIy > pIy){
            cout << "LEFT\n";
            bIy--;
        }
    }
   
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}