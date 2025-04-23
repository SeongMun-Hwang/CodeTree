#include <iostream>

using namespace std;

int n, m;
int A[100];

int Cal(){
    int cnt=A[m-1];
    while(m!=1){
        if(m%2==0){
            m/=2;
        }
        else{
            m-=1;
        }
        cnt+=A[m-1];   
    }
    return cnt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << Cal();

    return 0;
}