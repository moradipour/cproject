#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"اندازه ماتریس را وارد کنید: ";
    cin >> n;
    int M[n][n];
cout<<"ماتریس متناظر با رابطه را وارد کنید: ";
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
    cout << "Graph G {\n";
    for (int i = 0; i < n; i++) {
        cout << "  " << i << ";\n";
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] == 1) {
                cout << "  " << i << " -> " << j << ";\n";
            }
        }
    }
    cout << "}\n";
    return 0;
}
