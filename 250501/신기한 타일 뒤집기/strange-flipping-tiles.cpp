#include <iostream>
#define MAX 1000000
using namespace std;

int n;
int x[1000];
char dir[1000];

class Tile{
    public:
    char color='G';
    int black=0, white=0;
    Tile(){}
};

int main() {
    int index=MAX/2;
    cin >> n;
    Tile tiles[MAX];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if(dir[i]=='L'){
            for(int j=index;j>index-x[i];j--){
                tiles[j].color='W';
                tiles[j].white++;
            }
            index=index-x[i]+1;
        }
        else{
            for(int j=index;j<index+x[i];j++){
                tiles[j].color='B';
                tiles[j].black++;
            }
            index=index+x[i]-1;
        }
    }

    int num_white=0,num_black=0,num_gray=0;
    for(int i=0;i<MAX;i++){
        if(tiles[i].color=='W') num_white++;
        else if(tiles[i].color=='B') num_black++;
        else if(tiles[i].color=='G') num_gray++;
    }
    cout << num_white << " " << num_black;

    return 0;
}