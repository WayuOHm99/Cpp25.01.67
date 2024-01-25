/* LANG : C++ */
#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int scores[2][5];
    int sumcolumns[5] = {0};


    int i, j;


    cout << "Enter scores for each student and each subject:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            cout << "Enter score for student " << i + 1 << ", subject " << j + 1 << ": ";
            cin >> scores[i][j];
        }
    }


    for (j = 0; j < 5; j++) {
        for (i = 0; i < 2; i++) {
            sumcolumns[j] += scores[i][j];
        }
    }


    cout << "Sum of scores in each column:" << endl;
    for (j = 0; j < 5; j++) {
        cout << "Column " << j + 1 << ": " << sumcolumns[j] << endl;
    }

    return 0;
}

