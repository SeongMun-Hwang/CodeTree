#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    int max_x=0,max_y=0;
    int min_x=2001,min_y=2001;
    int arr[2000][2000]={0};
    for(int i=0;i<3;i++){
        x1[i]+=1000;
        y1[i]+=1000;
        x2[i]+=1000;
        y2[i]+=1000;

        if(x1[i]<min_x) min_x=x1[i];
        if(y1[i]<min_y) min_y=y1[i];
        if(x2[i]>max_x) max_x=x2[i];
        if(y2[i]>max_y) max_y=y2[i];

        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i]; k<y2[i];k++){
                if(i!=2) arr[j][k]=1;
                else arr[j][k]=2;
            }
        }
    }
    int cnt=0;
    for(int i=min_x;i<max_x;i++){
        for(int j=min_y;j<max_y;j++){
            if(arr[i][j]==1) cnt++;
        }
    }
    cout << cnt;

    return 0;
}