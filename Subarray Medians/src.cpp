#include <bits/stdc++.h>

typedef long long ll;

const int maxn = 1e4 + 1e2;
int val[maxn];
int cop[maxn];

int main(){
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;

	for(int i = 0; i < n; i++){
		std::cin >> val[i];
	}

	//compress
	std::copy(val, val + n, cop);
	std::sort(cop, cop + n);
	for(int i = 0; i < n; i++){
		val[i] = (int) (std::lower_bound(cop, cop + n, val[i]) - cop) + 1;
	}


}