#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[50];

void Cal(int &n){
    n = abs(n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        Cal(arr[i]);
        cout << arr[i] <<" ";
    }

    return 0;
}