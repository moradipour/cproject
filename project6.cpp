#include <iostream>
using namespace std;
int main() {
    int n, m, p;
cout<<"ابعاد ماتریس اول را وارد کنید: ";
 cin >> n >> m;
  cout<<"ابعاد ماتریس دوم را وارد کنید: ";
  cin >> m >> p;
    int R[n][m], S[m][p], T[n][p];
cout<<"ماتریس رابطه اول را وارد کنید: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> R[i][j];
cout<<"ماتریس رابطه دوم را وارد کنید: ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> S[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            T[i][j] = 0;
            for (int k = 0; k < m; k++) {
                if (R[i][k] == 1 && S[k][j] == 1) {
                    T[i][j] = 1;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }
    return 0;
}
