#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"اندازه ماتریس را وارد کنید:";
    cin >> n;
    int R[n][n],H[n][n];
cout<<"ماتریس رابطه را وارد کنید:";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> R[i][j];
    for (int i = 0; i < n; i++)
        R[i][i] = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            H[i][j] = R[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (R[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (R[j][k] == 1) {
                        H[i][k] = 0;
                    }
                }
            }
        }
    }
    cout << "Hasse Diagram Edges:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (H[i][j] == 1) {
                cout << (i + 1) << " -> " << (j + 1)<<endl;
            }
        }
    }
    return 0;
}

