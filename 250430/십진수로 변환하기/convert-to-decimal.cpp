#include <iostream>

using namespace std;

char binary[9];

int main() {
    cin >> binary;

    int num=0;
    for(int i=0;i<9;i++){
        if(binary[i]=='\0') break;
        num=num*2+(binary[i]-'0');
    }
    cout << num;

    return 0;
}