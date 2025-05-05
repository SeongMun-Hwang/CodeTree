#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    int area = (x2 - x1) * (y2 - y1);
    int result = area;

    // 세로로 완전히 막을 때
    if (a1 <= x1 && a2 >= x2) {
        int top = max(0, y2 - b2);
        int bottom = max(0, b1 - y1);
        result = min(top, bottom) * (x2 - x1);
    }

    // 가로로 완전히 막을 때
    if (b1 <= y1 && b2 >= y2) {
        int right = max(0, x2 - a2);
        int left = max(0, a1 - x1);
        result = min(right, left) * (y2 - y1);
    }

    cout << result;
    return 0;
}
