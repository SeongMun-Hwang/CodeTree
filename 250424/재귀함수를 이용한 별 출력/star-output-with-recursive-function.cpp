#include <iostream>

using namespace std;

int n;
void Cal(int n){
    if(n==0) return;
    Cal(n-1);
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<"\n";
}
int main() {
    cin >> n;

    Cal(n);

    return 0;
}