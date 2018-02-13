#include <iostream>
#include <queue>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int


void solve(){
	int t;
	cin >> t;
	int n;
	for(int i = 0; i < t; i++){
		cin >> n;
		ll p;
		queue<ll> q;
		cout << "Case #" << (i + 1) << ":";
		for(int j = 0; j < n*2; j++){
			cin >> p;
			if(q.empty()){
				q.push(p);
				continue;	
			}
			if(q.front() == p*75/100){
				cout << ' ' << q.front();
				q.pop();
				continue;
			}
			q.push(p);
		}
		cout << '\n';
	}
}

int main(){
	optimizar_io
	solve();
	return 0;
}
