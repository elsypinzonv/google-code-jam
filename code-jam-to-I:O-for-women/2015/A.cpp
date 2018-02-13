#include <iostream>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);


void solve(){
	int t;
	cin >> t;
	int bytes;
	for(int i = 0; i < t; i++){
		cin >> bytes;
		char bit;
		int exp;
		int decimal;
		string word = "";
		for(int z = 0; z < bytes; z++){
			exp = 128;
			decimal = 0;
			for(int j = 0; j < 8; j++){
				cin >> bit;
				if(bit == 'I') decimal += exp;
				exp = exp/2;
			}
			word += (char)decimal;
		}
		cout << "Case #" << (i + 1) << ": " << word <<'\n';
	}
}

int main(){
	optimizar_io
	solve();
	return 0;
}
