/* LANG : C++ */
#include <iostream>

using namespace std;

int main() {
	
	int i,j,n,m;
	int martrix1 [5] [5],martrix2[5][5];
	float avg;
	
	cin >> n;
	cin >> m;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> martrix1 [i] [j];
		}
	}
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin >> martrix2[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			avg = (float)(martrix1[i][j]+martrix2[i][j])/2;
			cout << avg << " ";
		}
		cout << endl;
	}
	return 0;
}
