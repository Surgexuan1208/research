#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N + 1);
    a[0] = -1;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    int l = 1, r = N + 1, Q, k; // 修正邊界設定
    cin >> k;
    while (l < r) { // 修改二分搜尋邊界條件
        Q = l + (r - l) / 2;
        if (k < a[Q]) {
            r = Q;
        } else {
            l = Q + 1; // 修改左邊界更新方式
        }
    }
    auto lb = lower_bound(a.begin(), a.end(), k);
    auto u = upper_bound(a.begin(), a.end(), k);
    int y = lb - a.begin();
    int x = u - a.begin();
    cout << "二分法搜尋結果: a[" << l - 1 << "]" << endl; // 修改這裡的輸出
    cout << "第一個 " << k << " 在 a[" << y - 1 << "] /" << x - y << " time(s)" << endl;
    return 0;
}
