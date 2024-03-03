/*
	CODECHEF-PESUECC
*/

#include <bits/stdc++.h> 
using namespace std; 

void solve(){
	int n;
	cin>>n; 
	int arr[n];  
	for(int i=0; i<n; i++){
		cin>>arr[i]; 
	} 
	vector<int>marked(n,0);
	set<pair<int,int>, greater<pair<int,int>>>s; 
	for(int i=0; i<n; i++){
		s.insert({arr[i],i});
	}
	
	int res = 0;  
	for(auto it:s){
		if(marked[it.second] == 1){
			continue; 
		}
		
		marked[it.second] = 1; 
		if(it.second - 1 >=0 && it.second + 1 < n){
			
			if(marked[it.second + 1] == 0)
				res += arr[it.second + 1];
			if(marked[it.second - 1] == 0)
				res += arr[it.second - 1]; 

			marked[it.second - 1] = 1; 
			marked[it.second + 1] = 1; 
		}
		else if(it.second - 1 < 0 && it.second + 1 < n ){
			if(marked[it.second + 1] == 0)
				res += arr[it.second + 1];
			marked[it.second + 1] = 1;
		}
		else if(it.second - 1 >= 0 && it.second + 1 >= n){
			if(marked[it.second - 1] == 0)
				res += arr[it.second - 1]; 
			marked[it.second - 1] = 1;
		}
	}
	cout<<res<<nline;
}

int main() {
	
	int t; 
	cin>>t; 
	while(t--){
		solve(); 
	}
	
}