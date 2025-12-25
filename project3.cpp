#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
cout << "ابعاد ماتریس اول را وارد کنید: ";
    cin >> r1 >> c1;
    int A[r1][c1];
cout << "ابعاد ماتریس دوم را وارد کنید: ";
    cin >> r2 >> c2;
    int B[r2][c2];
cout << "درایه های ماتریس اول را وارد کنید: ";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];
cout << "درایه های ماتریس دوم را وارد کنید: ";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];
    if (r1 == r2 && c1 == c2) {
        cout << "ماتریس وست: \n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++)
                cout << (A[i][j] || B[i][j]) << " ";
            cout << endl;
        }
        cout << "\nماتریس رسند: \n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++)
                cout << (A[i][j] && B[i][j]) << " ";
            cout << endl;
        }
    } 
else 
        cout << "ابعاد ماتریسها برای وست و رسند برابر نیست \n";
    if (c1 == r2) {
        cout << "\nماتریس حاصل ضرب بولی: \n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                int val = 0;
                for (int k = 0; k < c1; k++)
                    val = val || (A[i][k] && B[k][j]);
                cout << val << " ";
            }
            cout << endl;
        }
    } 
else 
        cout << "امکان ضرب بولی وجود ندارد\n";
    return 0;
}

