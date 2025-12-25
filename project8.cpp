#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"اندازه ماتریس را وارد کنید: ";
    cin >> n;
    int R[n][n];
    int complement[n][n];
    int inverse[n][n];
cout<<"ماتریس رابطه را وارد کنید: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> R[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            complement[i][j] = 1 - R[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = R[j][i];
        }
    }

    cout << "Complement Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << complement[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Inverse Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << inverse[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

