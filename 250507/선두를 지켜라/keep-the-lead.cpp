#include <iostream>
#include <vector>
using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;
    vector<int> A(1, 0);
    vector<int> B(1, 0);
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
        for(int j=0;j<t[i];j++){
            A.push_back(A.back()+v[i]);
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
        for(int j=0;j<t2[i];j++){
            B.push_back(B.back()+v2[i]);
        }        
    }

    char front =' ';
    int cnt=0;
    for(int i=1;i<A.size();i++){
        if(A[i]>B[i]){
            if(front=='B'){
                cnt++;
            }
            front='A';
        }
        else if(A[i]<B[i]){
            if(front=='A'){
                cnt++;
            }
            front='B';
        }
    }
    cout << cnt;

    return 0;
}