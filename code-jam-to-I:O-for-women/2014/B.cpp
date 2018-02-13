#include <iostream>
#include <math.h> 
#include <utility> 
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int

pair<ll, ll> greatMind(ll a, ll b, ll alpha, ll beta){
	//reproduction
	long double k = min (a, b);
	ll  babys = floor((k*2/100));
	ll  babyA = floor((babys*alpha/100));
	ll  babyB = floor((babys*beta/100));
	ll  remainingBabys = babys - (babyA + babyB);
	babyA += floor(remainingBabys/2);
	babyB += floor(remainingBabys/2);
	if(remainingBabys % 2 != 0) babyB++;

	//Decommissioning
	ll  deadA = floor(a/100);
	ll  deadB = floor(b/100);

	return {a + babyA - deadA, b + babyB - deadB};
}

pair<ll , ll > greatMindYear(ll  a, ll  b, ll  alpha, ll  beta, ll  y){
	pair<ll , ll > population = {a,b};
	ll  lastA, lastB;
	lastA = lastB = -1;
	for(ll  i = 0; i < y; i++){
		population = greatMind(population.first, population.second, alpha, beta);
		if(lastA == population.first && lastB == population.second) return population;
		lastA = population.first;
		lastB = population.second;

	} 
	return population;
}

void solve(){
	ll  a, b, alpha, beta, y;
	ll  n;
	cin >> n;
	for( ll  i = 0; i < n; i++){
		cin >> a >> b >> alpha >> beta >> y;
		pair<ll , ll > population = greatMindYear(a, b, alpha, beta, y);
		cout << "Case #" << i + 1 << ": " << population.first << " " << population.second << '\n';
	}
}

int  main(){
	optimizar_io
	solve();
	return 0;
}
