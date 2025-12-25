#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
cout<<"اندازه دو بردار را وارد کنید:";
    cin >> n;
    vector<int> A(n), B(n);
cout<<"عناصر بردار اول را وارد کنید:";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
cout<<"عناصر بردار دوم را وارد کنید:";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < B[i]) {
            cout << "بردار اول قبل از بردار دوم است (A < B)";
            return 0;
        }
        else if (A[i] > B[i]) {
            cout << "بردار اول بعد از بردار دوم است (A > B)";
            return 0;
        }
    }
    cout << "دو بردار برابر هستند و ترتیب الفبایی وجود ندارد";
    return 0;
}

