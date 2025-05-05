#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int arr[2000][2000];
int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    x1[0]+=1000;
    y1[0]+=1000;
    x2[0]+=1000;
    y2[0]+=1000;
    x1[1]+=1000;
    y1[1]+=1000;
    x2[1]+=1000;
    y2[1]+=1000;
    for(int n = 0; n<2;n++){
        for(int i=x1[n]; i<=x2[n]; i++){
            for(int j=y1[n]; j<=y2[n]; j++){
                if(n==0) arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
    }
    int min_x=2000, min_y=2000;
    int max_x=0, max_y=0;
    bool isCovered=true;
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            if(arr[i][j]==1){
                isCovered=false;
                if(i>max_x) max_x=i;
                if(i<min_x) min_x=i;
                if(j>max_y) max_y=j;
                if(j<min_y) min_y=j; 
            }
        }
    }
    if(isCovered) cout << 0;
    else cout << (max_x-min_x) * (max_y-min_y);

    return 0;
}