#include <bits/stdc++.h>

typedef long long ll;

const int maxn = 1e6 + 100;
int val[maxn];
int suf[maxn];
ll res = 0;

int main(){
    std::ios::sync_with_stdio(false);
    
    int n;
    std::cin >> n;
    
    for(int i = 1; i < n; i++){
        std::cin >> val[i];
        suf[i + val[i] - 1] = std::max(suf[i + val[i] - 1], val[i]);
    }
    
    for(int i = n - 1; i > 0; i--){
        suf[i - 1] = std::max(suf[i] - 1, suf[i - 1]);
    }
    
    for(int i = 1; i < n; i++){
        std::cout << suf[i] << ' ';
    }
    std::cout << '\n';
}