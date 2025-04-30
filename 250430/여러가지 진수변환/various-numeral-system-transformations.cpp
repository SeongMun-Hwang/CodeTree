#include <iostream>
#include <cmath>
using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    int num[10];
    int cnt=0;
    while(1){
        if(N<B){
            num[cnt]=N;
            break;
        }
        num[cnt++]=N%B;
        N/=B;
    }
    for(int i=cnt;i>=0;i--){
        cout << num[i];
    }

    return 0;
}