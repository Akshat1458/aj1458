#include<bits/stdc++.h>
using namespace std;

#define endl		'\n'
#define w(t)		int t;cin>>t;while(t--)
#define int			long long
#define fr(i,a,b)	for(int i=a;i<=b;i++)
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define pb 			push_back
#define ppb			pop_back
#define mp			make_pair	
#define all(x)		x.begin(),x.end()
#define ff			first
#define ss			second
#define pii			pair<int,int>
#define vi			vector<int>
#define vvi			vector<vi>
#define pqi			priority_queue<int>
#define pqd			priority_queue<int,vi,greater<int>>
#define inf			LLONG_MAX
#define mod			1000000007

int gcd(int a,int b){ return b==0?a:gcd(b,a%b);}
int lcm(int a,int b){ return a*b/gcd(a,b);}


int32_t main(){

	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t){
		int h,n,m;
		cin>>h>>n>>m;
		if(h<=10 && m>0){
			cout<<"YES\n";
			continue;
		}
		rep(i,0,n){
			h=(h/2+10);
		}
		h-=10*m;
		if(h<=0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
	
}
