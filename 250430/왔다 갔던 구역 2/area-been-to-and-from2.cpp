#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int block[101];  // 크기 101로 수정

int main() {
    cin >> n;
    int index = 50;  // index는 50부터 시작

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if (dir[i] == 'R') {
            // 오른쪽으로 이동
            for (int j = index; j < index + x[i]; j++) {
                block[j]++;
            }
            index += x[i];
        }
        else if (dir[i] == 'L') {
            // 왼쪽으로 이동
            for (int j = index - 1; j >= index - x[i]; j--) {
                block[j]++;
            }
            index -= x[i];
        }
    }

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (block[i] >= 2) count++;  // 2개 이상 겹치는 구간을 카운트
    }

    cout << count;
    return 0;
}
