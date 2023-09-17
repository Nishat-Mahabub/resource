#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	for(ll i=0;i<32;i++)
	{
		ll k=(1<<i);
		vector<int> v={0};
		for(ll j=0;j<n;j++)
		{
			if((arr[j]&k))
			{
				v.push_back(j+1);
			}
		}
		if(v.size()>2)
		{
			cout<<"YES"<<endl;
			cout<<v.size()-1<<endl;
			v.back()=n;
			for(int j=1;j<v.size();j++)
			{
				cout<<v[j-1]+1<<" "<<v[j]<<endl;
			}
			return;
		}
	}
	cout<<"NO"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}