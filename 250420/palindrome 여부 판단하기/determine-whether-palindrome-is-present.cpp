#include <iostream>
#include <string>

using namespace std;

string A;
bool Cal(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]) return false;
    }
    return true;
}
int main() {
    cin >> A;

    if(Cal(A)) cout << "Yes";
    else cout << "No";

    return 0;
}