#include<bits/stdc++.h>

using namespace std;

#define up 'U'
#define left 'L'
#define down 'D'
#define right 'R'

//moves
string moves = "ULDR";

//sequence
string s;

//grid of 7 x 7
int g[7][7];

// each couple (r[i], c[i]) for i in {0,1,2,3} describes a move U L D R 
int r[] = {-1, 0, 1, 0};
int c[] = {0, -1, 0, 1};

//x for columns y for rows 
int solve(int y, int x, int index, char type)
{
    if(index == 48) return 1; //if we execute a whole sequence of movements
    if(g[6][0]) return 0; //if we arrive at this cell without the move being the last one we don't count the path

    //unavailable cells
    if(type == left && (!x || g[y][x-1]) && y > 0 && y < 6 && !g[y-1][x] && !g[y+1][x]) return 0;
    if(type == down && (y == 6 || g[y+1][x]) && x > 0 && x < 6 && !g[y][x-1] && !g[y][x+1]) return 0;
    if(type == right && (x == 6 || g[y][x+1]) && y > 0 && y < 6 && !g[y-1][x] && !g[y+1][x]) return 0;
    if(type == up && (!y || g[y-1][x]) && x > 0 && x < 6 && !g[y][x-1] && !g[y][x+1]) return 0;

    // ?
    if(s[index] == '?'){
        int res = 0;
        //test all possible moves
        for(int j = 0; j < 4; j++){
            //make a move
            int xx = x + c[j];
            int yy = y + r[j];

            //check if out the grid or already visited
            if(xx < 0 || xx > 6) continue;
            if(yy < 0 || yy > 6) continue;
            if(g[yy][xx]) continue;

            g[yy][xx] = 1; //mark visited

            //next move         
            res += solve(yy, xx, index + 1, moves[j]);
            g[yy][xx] = 0; //unmark
        }
        return res;
    }

    //compute move 
    if(s[index] == left) x--;
    if(s[index] == down) y++;
    if(s[index] == right) x++;
    if(s[index] == up) y--;
    //check if out the grid or already visited
    if(x < 0 || x > 6) return 0;
    if(y < 0 || y > 6) return 0;
    if(g[y][x]) return 0;

    g[y][x] = 1; //mark visited

    //next move
    int res = solve(y, x, index + 1, s[index]);
    g[y][x] = 0; //unmark
    return res;
}

int main(int argc, char const *argv[])
{
    cin >> s;
    g[0][0] = 1;
    cout << solve(0, 0, 0, 0) << endl;
    return 0;
}