#include <iostream>
#include <string>

using namespace std;

string A;
int Cal(string s){
    char c = s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]!=c) return 1;
    }
    return 0;
}
int main() {
    cin >> A;
    
    if(Cal(A)) cout << "Yes";
    else cout << "No";

    return 0;
}