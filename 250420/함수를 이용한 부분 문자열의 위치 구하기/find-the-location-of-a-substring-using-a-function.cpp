#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int Cal(){
    int range = text.length() - pattern.length() +1;
    for(int i=0;i<range;i++){
        bool isFind=true;
        for(int j=0;j<pattern.length();j++){
            if(text[i+j]!=pattern[j]) {
                isFind=false;
                break;
            }
        }
        if(isFind) return i;
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << Cal();

    return 0;
}