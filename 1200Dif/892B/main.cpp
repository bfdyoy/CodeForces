#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int L[1000005];

int main() {
	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		scanf("%d", &L[i]);
	}
	int alive = 1;
	int l = L[n-1];
	for(int i=n-2; i>=0; i--) {
		if(l<1)
			alive++;
		l = L[i] > l-1 ? L[i] : l-1;
	}
	cout << alive << endl;
}
