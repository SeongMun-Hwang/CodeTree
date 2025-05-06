#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    int cnt=1;
    int max=1;
    char prev =' ';
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i==0){
        if(arr[i]<0) prev='M';
        else if(arr[i]>0) prev='P';
        }
        if(i!=0){
            if(arr[i]>0){
                if(prev=='P') cnt++;
                else {
                    cnt=1;
                    prev='P';
                }
            }
            else if(arr[i]<0){
                if(prev=='M') cnt++;
                else{
                    cnt = 1;
                    prev='M';
                }
            }
        }
        if(cnt>max) max=cnt;
    }

    cout << max;

    return 0;
}