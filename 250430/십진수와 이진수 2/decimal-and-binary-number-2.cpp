#include <iostream>
#include <vector>
using namespace std;

string N;

int main() {
    cin >> N;

    int num=0;
    for(int i=0;i<N.length();i++){
        num=num*2+(N[i]-'0');
    }
    num*=17;

    vector<int> v;
    while(1){
        if(num<2){
            v.push_back(num);
            break;
        }
        v.push_back(num%2);
        num/=2;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
    return 0;
}