#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        int n;
        cin >> n;
        student[n]++;
        if(student[n]>=K) {
            cout << n;
            return 0;
        }
    }
    cout << -1;

    // Please write your code here.

    return 0;
}