#include <iostream>

using namespace std;

int N;
void Decrease(int n){
    if(n==0) return;
    cout << n << " ";
    Decrease(n-1);
}
void Increase(int n){
    if(n==0) return;
    Increase(n-1);
    cout << n << " ";
}
int main() {
    cin >> N;

    Increase(N);
    cout << "\n";
    Decrease(N);

    return 0;
}