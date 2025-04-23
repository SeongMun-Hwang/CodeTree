#include <iostream>

using namespace std;

int n, m;
int arr[100];
int Cal(int a1, int a2){
    int cnt = 0;
    for(int i=a1-1;i<=a2-1;i++){
        cnt+=arr[i];
    }
    return cnt;
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << Cal(a1,a2) << "\n";
    }

    // Please write your code here.

    return 0;
}