#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,q,cnt=0;
		cin >> n >> a >> q;
		string s;
		cin >> s;
		if(a>=n)
		{
			cout << "YES\n";continue;
		}
		int am = a;
		for(int i = 0;i < q;i++)
		{
			if(s[i]=='-') 
			{
				cnt++;
			}
			if(s[i]=='+')
			{
				a++;
				if(cnt==0)am++;
				else
					cnt--;
			}
			if(a>=n&&am>=n)
			{
				cout << "YES\n";break;
			}
		}
		if(a<n&&am<n) cout << "NO\n";
		else if(!(a>=n&&am>=n))cout << "MAYBE\n";
	}
}