#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int size = (x2[0]-x1[0]) * (y2[0]-y1[0]);

    if(y2[1]>=y2[0]&&y2[1]<=y2[0]){
        if(x2[1]<x2[0] && !x1[1]>x1[0]){
            size -= (x2[0]-x2[1]) * (y2[0]-y1[0]);
        }
        else if(x1[1]>x1[0] && !x2[1]<x2[0]){
            size -= (x1[1]-x1[0]) * (y2[0]-y1[0]);
        }
    }
    if(x2[1]>=x2[0] && x1[1]<=x1[0]){
        if(y2[1]<y2[0] && !y1[1]>y1[0]){
            size -= (y2[0]-y1[0]) * (x2[0]-x1[0]);
        }
        else if(y1[1]>y1[0] && !y2[1]<y2[0]){
            size -= (y1[1]-y1[0]) * (x2[0]-x1[0]);
        }
    }

    cout << size;

    return 0;
}