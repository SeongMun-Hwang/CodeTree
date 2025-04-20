#include <iostream>

using namespace std;

int n;
int arr[50];
void Cal(int &a){
    if(a%2==0) a/=2;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n; i++){
        Cal(arr[i]);
        cout << arr[i] << " ";
    }
    return 0;
}