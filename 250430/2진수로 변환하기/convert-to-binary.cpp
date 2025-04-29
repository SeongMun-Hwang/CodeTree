#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    int binary[1000];
    int cnt=0;
    while(1){
        if(n<2){
            binary[cnt]=n;
            break;
        }
        binary[cnt]=n%2;
        n/=2;
        cnt++;
    }
    for(int i=cnt;i>=0;i--){
        cout << binary[i];
    }

    return 0;
}