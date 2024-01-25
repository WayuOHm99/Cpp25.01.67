/* LANG : C++ */
#include <iostream>
using namespace std;

int main() {
    int i, j, k, n, m, p;
    string name[5][5][5];

    cin >> n >> m >> p;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < p; k++) {
                cin >> name[i][j][k];
            }
        }
    }

    cout << " " << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < p; k++) {
                cout << "name[" << i << "][" << j << "][" << k << "]: " << name[i][j][k] << endl;
            }
        }
    }

    cout << " " << endl;
    for (i = 0; i < n; i++) {
        cout << "name[" << i << "][][]: ";
        for (j = 0; j < m; j++) {
            for (k = 0; k < p; k++) {
                cout << name[i][j][k] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
