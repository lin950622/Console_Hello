#include <iostream>
using namespace std;

int main() {
    int n;

    // 輸入正整數 n
    cout << "請輸入一個正整數 n: ";
    cin >> n;

    // 1. 使用 for 迴圈計算偶數和
    int sum_for = 0;
    for (int i = 2; i <= n; i += 2) {  // 從 2 開始，每次加 2
        sum_for += i;
    }
    cout << "使用 for 迴圈計算的偶數和: " << sum_for << endl;

    // 2. 使用 while 迴圈計算偶數和
    int sum_while = 0;
    int i_while = 2;
    while (i_while <= n) {  // 當 i_while 小於等於 n 時
        sum_while += i_while;
        i_while += 2;  // 每次加 2
    }
    cout << "使用 while 迴圈計算的偶數和: " << sum_while << endl;

    // 3. 使用 do-while 迴圈計算偶數和
    int sum_do_while = 0;
    int i_do_while = 2;
    do {
        sum_do_while += i_do_while;
        i_do_while += 2;
    } while (i_do_while <= n);  // 當 i_do_while 小於等於 n 時
    cout << "使用 do-while 迴圈計算的偶數和: " << sum_do_while << endl;

    return 0;
}
