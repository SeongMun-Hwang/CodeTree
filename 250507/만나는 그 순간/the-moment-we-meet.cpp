#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;
    vector<int> A(1, 0);
    vector<int> B(1,0);

    for (int i = 0; i < n; i++) {
        cin >> d[i] >> t[i];
        for(int j=0;j<t[i];j++){
            if(d[i]=='R') A.push_back(A.back()+1);
            else A.push_back(A.back()-1);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> d2[i] >> t2[i];
        for(int j=0;j<t2[i];j++){
            if(d2[i]=='R') B.push_back(B.back()+1);
            else B.push_back(B.back()-1);
        }
    }

    int time=0;
    for(int i=1;i<min(A.size(),B.size());i++){
        if(A[i]==B[i]){
            time=i;
            break;
        }
    }
    if(time==0) cout << -1;
    else cout << time;

    return 0;
}