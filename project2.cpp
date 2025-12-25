#include <iostream>
using namespace std;
int main() {
    int n,m,a,b;
cout << "اندازه ماتریس را وارد کنید: ";
    cin >> n;
cout << "تعداد عناصر رابطه را وارد کنید: ";
    cin >> m;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
cout << "عناصر رابطه را وارد کنید: ";
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        matrix[a - 1][b - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
