//han che n<30
// n>30 phai lam voi so lon
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll catalan( int n) { 
    // Base case 
    if (n <= 1) return 1;   
    // catalan(n) is sum of catalan(i)*catalan(n-i-1) 
    ll res = 0; 
    for (int i=0; i<n; i++) 
        res += catalan(i)*catalan(n-i-1);   
    return res; 
} 
ll catalanDP( int n) { 
    // Table to store results of subproblems 
    ll c[n+1];   
    // Initialize first two values in table 
    c[0] = c[1] = 1; 	
    // Fill entries in catalan[] using recursive formula 
    for (int i=2; i<=n; i++) 
    { 
        c[i] = 0; 
        for (int j=0; j<i; j++) {
        	c[i] += c[j] * c[i-j-1];        	
		}              
    } 
    return c[n]; 
} 
int main() { 
	int T, n;cin>>T;
	while(T--){
		cin>>n; cout<<catalanDP(n)<<endl;
	}	
} 
