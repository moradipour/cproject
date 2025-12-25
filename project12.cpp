#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"اندازه ماتریس را وارد کنید:";
    cin >> n;
    int R[n][n];
cout<<"ماتریس رابطه را وارد کنید:";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> R[i][j];
        }
    }
    bool isTotal = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (R[i][j] == 0 && R[j][i] == 0) {
                isTotal = false;
                break;
            }
        }
        if (!isTotal)
            break;
    }

    if (isTotal)
        cout << "اين رابطه يك ترتيب كامل است";
    else
        cout << "اين رابطه ترتيب كامل نيست";
    return 0;
}

