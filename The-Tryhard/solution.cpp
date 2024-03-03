#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int mx = -1e9;
	int ix = 0;

	for(int i=0;i<n;i++){
		if(a[i] > mx){
			mx = a[i];
			ix = i;
		}
	}

	int cnt = 0;
	int dist = n-1 - ix;

	for(auto i:a) if(i == mx) cnt++;

	if(cnt == n){
		cout << 0 << '\n';
	}else{
		cout << dist + 1 << '\n';
	}
}
