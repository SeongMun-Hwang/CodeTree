#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    int block[101];
    int max=0;
    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j=A[i];j<=B[i];j++){
            block[j]++;
            if(block[j]>max) max=block[j];
        }
    }

    cout << max;

    return 0;
}