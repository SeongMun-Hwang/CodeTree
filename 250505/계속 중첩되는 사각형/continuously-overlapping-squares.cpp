#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
char arr[200][200];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int j=x1[i]+100;j<x2[i]+100;j++){
            for(int k=y1[i]+100;k<y2[i]+100;k++){
                if(i%2==0) arr[j][k]='R';
                else arr[j][k]='B';
            }
        }
    }
    int cnt=0;
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(arr[i][j]=='B') cnt++;
        }
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}