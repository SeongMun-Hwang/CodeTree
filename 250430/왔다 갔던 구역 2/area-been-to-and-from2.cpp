#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int block[100];
int main() {
    cin >> n;
    int index=49;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if(dir[i]=='R'){
            for(int j=index;j<x[i]+index;j++){
                block[j]++;
            }
            index+=x[i];
        }
        else if(dir[i]=='L'){
            for(int j=index-1;j>=index-x[i];j--){
                block[j]++;            
            }
            index-=x[i];
        }
    }
    int count=0;
    for(int i=0;i<101;i++){
        if(block[i]>=2) count++;
    }
    cout << count;
    return 0;
}