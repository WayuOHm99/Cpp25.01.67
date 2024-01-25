/* LANG : C++ */
#include<iostream>

using namespace std;

int main() {

    int matrix1[5][5];
    int matrix2[5][5];


    int i, j, n, m;


    float avg;


    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;


    cout << "Enter elements of matrix1:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements of matrix2:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }


    cout << "Average of each element in the matrices:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            avg = (float)(matrix1[i][j] + matrix2[i][j]) / 2;
            cout << avg << " ";
        }
        cout << endl;
    }

    return 0;
}

