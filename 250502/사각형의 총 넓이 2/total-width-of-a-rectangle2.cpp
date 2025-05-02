#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    int max_x=0,max_y=0;
    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=100;
        y1[i]+=100;
        x2[i]+=100;
        y2[i]+=100;
        if(max(x1[i],x2[i])>max_x){
            max_x=max(x1[i],x2[i]);
        }
        if(max(y1[i],y2[i])>max_y){
            max_y=max(y1[i],y2[i]);
        }
    }

int cnt=0;
    int arr[200][200] = {0}; 
    for(int i=0;i<N;i++){
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                if(arr[j][k]==0){
                arr[j][k]=1;
                cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}