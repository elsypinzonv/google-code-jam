#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);


void solve(){
	int t;
	cin >> t;
	int f, s;
	for(int i = 0; i < t; i++){
		cin >> f >> s;
		set< pair<int,int> > set;
		int a, b;
		vector<int> v(101, 0);
		for(int j = 0; j < f; j++){
			cin >> a >> b;
			a = min(a, b);
			b = max(a, b);
			if(set.count({a,b}) != 0) continue;
			set.insert({a, b});
			if(a != b) v[a]++;
			v[b]++;
		}
		int maxVal = 0;
		for(int j = 0; j < v.size(); j++){
			maxVal = max(v[j], maxVal);
		}
		cout << "Case #" << (i + 1) << ": " << maxVal << '\n';
	}
}

int main(){
	optimizar_io
	solve();
	return 0;
}
