#include <iostream>
#include <string>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

string printLine(string word){
	string line = "+-";
	for( int i = 0; i < word.size(); i++){
		line +="-"; 
	}
	line += "-+";
	return line;
}

void solve(){
	int n;
	cin >> n;
	string word;
	getline( cin, word );
	for( int i = 0; i < n; i++ ){
		getline( cin, word );
		cout << "Case #" << (i + 1) <<":" << '\n';
		cout << printLine(word) << '\n';
		cout << "| " << word << " |" << '\n';
		cout << printLine(word) << '\n';
	}
}

int main(){
	optimizar_io
	solve();
	return 0;
}
