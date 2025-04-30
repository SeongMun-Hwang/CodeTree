#include <iostream>
#include <vector>
using namespace std;

string N;
int A, B;
int main() {
    cin >> A >> B >> N;

    int num=0;
    for(int i=0;i<N.length();i++){
        num=num*A+(N[i]-'0');
    }

    vector<int> v;
    while(1){
        if(num<B){
            v.push_back(num);
            break;
        }
        v.push_back(num%B);
        num/=B;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
    return 0;
}