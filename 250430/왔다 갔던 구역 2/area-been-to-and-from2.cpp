#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int block[101];  // 범위가 0~100이므로 크기를 101로 설정

int main() {
    cin >> n;
    int index = 50;  // 처음 시작 위치는 50

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        
        if (dir[i] == 'R') {
            // 오른쪽으로 이동
            for (int j = index; j < index + x[i]; j++) {
                block[j]++;
            }
            index += x[i];  // index를 오른쪽으로 이동
        }
        else if (dir[i] == 'L') {
            // 왼쪽으로 이동
            for (int j = index - 1; j >= index - x[i]; j--) {
                block[j]++;
            }
            index -= x[i];  // index를 왼쪽으로 이동
        }
    }

    // 겹치는 부분을 세는 부분
    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (block[i] >= 2) count++;  // 겹치는 부분은 2 이상
    }

    cout << count;  // 최종적으로 겹치는 부분의 개수를 출력
    return 0;
}
