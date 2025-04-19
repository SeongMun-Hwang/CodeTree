#include <iostream>

using namespace std;

int Y, M, D;
int monthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int CalYear(int y){
    if(y%4==0&&y%100==0) return 28;
    if(y%4==0&&y%100==0&&Y%400==0) return 29;
    if(y%4==0) return 29;
    else return 28;
}

int Cal(int y, int m, int d){
    if(m<0||m>12) return 0;
    int month;
    if(m==2){
        month = CalYear(y);
    }
    else{
        month = monthDays[m];
    }
    if(d<0||d>month) return 0;
    return 1;
}
void PrintSeason(int m){
    if(m>=3 && m<=5) cout <<"Spring";
    else if(m>=6 && m<=8) cout <<"Summer";
    else if(m>=9 && m<=11) cout << "Fall";
    else cout <<"Winter";
}
int main() {
    cin >> Y >> M >> D;

    if(Cal(Y,M,D)){
        PrintSeason(M);
    }
    else cout << -1;

    return 0;
}