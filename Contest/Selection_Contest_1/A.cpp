#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c;
    while(scanf("%d %d", &n, &m) == 2)
    {
        int ans=0;
        cout<<n<<" "<<m<<" ";
        if(n>m)
        {
            swap(n,m);
        }
        for(i=n; i<=m; i++)
        {
            c=1;
            j=i;
            while(j > 1)
            {
                if(j%2==0)
                {
                   j = j/2;
                }
                else
                {
                   j = (3*j)+1;
                }
                c++;
            }
            if(c>=ans)
            {
              ans =c;
            }
        }
       cout<<ans<<endl; 
    }
    return 0;
}