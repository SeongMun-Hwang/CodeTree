#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int block[101];
int main() {
    cin >> n;
    int max=0;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j=x1[i];j<=x2[i];j++){
            block[j]++;
            if(block[j]>max) max=block[j];
        }
    }
    cout << max;

    return 0;
}