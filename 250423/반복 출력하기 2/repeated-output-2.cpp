#include <iostream>

using namespace std;

int N;
void Print(int n){
    if(n==0) return;

    cout << "HelloWorld\n";
    Print(n-1);
}
int main() {
    cin >> N;

    Print(N);

    return 0;
}