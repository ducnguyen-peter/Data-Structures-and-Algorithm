#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(int n)
{
	ll ugly[n];
	ll i2 = 0, i3 = 0, i5 = 0;
	ll next2 = 2, next3 = 3, next5 = 5;
	ll next = 1;
	ugly[0] = 1;
	for(int i = 1; i<=n; i++)
	{
		next = min(next2,min(next3,next5));
		ugly[i] = next;
		if(next==next2)
		{
			i2 += 1;
			next2 = ugly[i2]*2;
		}
		if(next==next3)
		{
			i3++;
			next3 = ugly[i3]*3;
		}
		if(next==next5)
		{
			i5++;
			next5 = ugly[i5]*5;
		}
	}
	return ugly[n-1];
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<solution(n)<<endl;
	}
	return 0;
}

