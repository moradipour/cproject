#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "اندازه ماتریس را وارد کنید: ";
    cin >> n;
    int M[n][n];
    cout << "ماتریس رابطه را وارد کنید: (0 یا 1) \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> M[i][j];
    bool reflexive = true;
    for (int i = 0; i < n; i++) {
        if (M[i][i] != 1) {
            reflexive = false;
            break;
        }
    }
    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] != M[j][i]) {
                symmetric = false;
                break;
            }
        }
    }
           bool transitive = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (M[j][k] == 1 && M[i][k] == 0) {
                        transitive = false;
                        break;
                    }
                }
            }
        }
    }
    if (reflexive && symmetric && transitive)
        cout << "رابطه هم ارزی است " << endl;
    else
        cout << "رابطه هم ارزی نيست " << endl;
    return 0;
}
