#include <iostream>
using namespace std;
int main() {
    string expr;
    cout << "گزاره مرکب را وارد کنید: ";
    cin >> expr;
    cout << "p q | result\n";
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            bool P = p;
            bool Q = q;
            bool result = false;
            if (expr == "p&q")
                result = P && Q;
            else if (expr == "p|q")
                result = P || Q;
            else if (expr == "!p")
                result = !P;
            else if (expr == "!q")
                result = !Q;
            else if (expr == "!p&q")
                result = (!P) && Q;
            else if (expr == "p&!q")
                result = P && (!Q);
            else if (expr == "!p|q")
                result = (!P) || Q;
            else if (expr == "p|!q")
                result = P || (!Q);
            cout << p << " " << q << " | " << result << endl;
        }
    }
    return 0;
}
