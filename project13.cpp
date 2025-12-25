#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"اندازه ماتریس را وارد کنید: ";
    cin >> n; 
    int adj[n][n];
cout<<"ماتریس مجاورت را وارد کنید: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int degree = 0;
        for (int j = 0; j < n; j++) {
            degree += adj[i][j];
        }
        cout << "Degree of vertex " << i << " = " << degree << endl;
    }
    return 0;
}
