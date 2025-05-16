#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

struct Meet{
    int x = -1;
    int y = -1;
    int t = -1;
};
bool cmp(Meet a, Meet b){
    return a.t < b.t;
}

class Dev{
    public :
    bool infected=false;
    int cnt;
    Dev(){ cnt = K; }
};

int main() {
    cin >> N >> K >> P >> T;
    vector<Dev> Devs(N);
    vector<Meet> Meets(T);

    for (int i = 0; i < T; i++) {
        cin >> Meets[i].t >> Meets[i].x >> Meets[i].y;
    }
    Devs[P-1].infected=true;
    sort(Meets.begin(),Meets.end(),cmp);

    for (int i = 0; i < T; i++) {
        int a = Meets[i].x - 1;
        int b = Meets[i].y - 1;

        bool aCanInfect = Devs[a].infected && Devs[a].cnt > 0;
        bool bCanInfect = Devs[b].infected && Devs[b].cnt > 0;

        if (aCanInfect) Devs[a].cnt--;
        if (bCanInfect) Devs[b].cnt--;

        if (aCanInfect) Devs[b].infected = true;
        if (bCanInfect) Devs[a].infected = true;
    }
    for(int i=0;i<N;i++){
        cout << Devs[i].infected;
    }

    return 0;
}