#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "اندازه ماتریس را وارد کنید:";
    cin >> n;
    int R[n][n];
    cout << "ماتریس رابطه را وارد کنید: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> R[i][j];
        }
    }
    bool reflexive = true;
    for (int i = 0; i < n; i++) {
        if (R[i][i] != 1) {
            reflexive = false;
            break;
        }
    }
    bool antisymmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && R[i][j] == 1 && R[j][i] == 1) {
                antisymmetric = false;
                break;
            }
        }
    }
    bool transitive = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (R[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (R[j][k] == 1 && R[i][k] == 0) {
                        transitive = false;
                        break;
                    }
                }
            }
        }
    }
    if (reflexive && antisymmetric && transitive) 
        cout << "اين رابطه يک ترتيب جزئی است ";
else
        cout << "اين رابطه ترتيب جزئی نيست ";
    return 0;
}
