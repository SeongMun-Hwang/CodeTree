#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() {
    cin >> n >> m;
    vector<int> A(1,0);
    vector<int> B(1,0);

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
        for(int j=0;j<t[i];j++){
            if(d[i]=='R') A.push_back(A.back()+1);
            else A.push_back(A.back()-1);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
        for(int j=0;j<t_b[i];j++){
            if(d_b[i]=='R') B.push_back(B.back()+1);
            else B.push_back(B.back()-1);
        }        
    }
    int maxLen = max(A.size(),B.size());
    while(A.size()<maxLen) A.push_back(A.back());
    while(B.size()<maxLen) B.push_back(B.back());
    int cnt = 0;
    for(int i=1;i<maxLen;i++){
           if(A[i-1]!=B[i-1]&&A[i]==B[i]) cnt++;
    }
    cout << cnt;

    return 0;
}