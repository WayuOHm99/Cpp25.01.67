/* LANG : C++ */
#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	int i,j,sum[5];
	int scores[2][5];
	
	for (i=0;i<2;i++){
		for(j=0;j<5;j++){
			cin >> scores [i][j];
		}
	}
	for (j=0;j<5;j++){
		sum[j]=0;
		for (i=0;i<2;i++){
			sum[j]+=scores[i][j];
		}
	}
	for (j=0;j<5;j++){
		sum[j]=0;
		for(i=0;i<2;i++){
			sum[j]+=scores [i][j];
		}
	}
	for (i=0;i<5;i++){
		cout << sum[i] << "";
	}
	return 0;
}
