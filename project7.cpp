#include <iostream>
using namespace std;
int main() {
    int n,u,v;
    cout << "تعداد رئوس را وارد کنید:";
    cin >> n;
    int matrix[n][n];
    cout << "ماتریس رابطه را وارد کنید: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
           matrix[i][i]=0;
    cout << "اندیس مبدا را وارد کنید: ";
    cin >> u;
    cout << "اندیس مقصد را وارد کنید: ";
    cin >> v;
    bool exists = false;
    for (int i= 0; i< n; i++) {
        for (int j= 0; j< n; j++) {
            if (u!=j&&matrix[u][i] == 1&&
                matrix[i][j] == 1&&
                matrix[j][v] == 1) {
                exists = true;
                break;
            }
        }
        if (exists) break;
    }
    if (exists)
        cout << "بین این دو اندیس مسیر به طول 3 وجود دارد";
    else
        cout << "بین این دو اندیس مسیر به طول 3 وجود ندارد";
    return 0;
}
