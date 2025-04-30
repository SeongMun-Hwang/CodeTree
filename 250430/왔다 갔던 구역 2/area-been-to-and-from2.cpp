#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int block[101];  // 크기를 101로 변경, 인덱스 0부터 100까지 사용할 수 있도록

int main() {
    cin >> n;
    int index = 50;  // index는 50부터 시작

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        if (dir[i] == 'R') {
            for (int j = index; j < index + x[i]; j++) {
                block[j]++;
            }
            index += x[i];
        }
        else if (dir[i] == 'L') {
            for (int j = index - 1; j >= index - x[i]; j--) {
                block[j]++;
            }
            index -= x[i];
        }
    }

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (block[i] >= 2) count++;
    }

    cout << count;
    return 0;
}
