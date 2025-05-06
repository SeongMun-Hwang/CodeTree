#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    int cnt=1;
    int max=1;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i!=0){
             if(arr[i]==arr[i-1]){
                cnt++;
             }
             else{
                cnt=1;
             }
                if(cnt>max) max=cnt;
        }
    }

    cout << max;

    return 0;
}