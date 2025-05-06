#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    int cnt=0;
    int max=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]>t) cnt++;
        else {
            cnt=0;
        }
        if(cnt>max) max=cnt;
    }
    cout << max;
    return 0;
}