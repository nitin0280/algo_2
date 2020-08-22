#include <bits/stdc++.h>

#define int long long
#define gcd            __gcd
#define setbits(x)     __builtin_popcountll(x)
#define zrobits(x)     __builtin_ctzll(x)
#define mod            1000000007
#define mod2           998244353
#define maxe           *max_element
#define mine           *min_element
#define inf            1e18
#define deci(x, y)      fixed<<setprecision(y)<<x
#define w(t)           int t; cin>>t; while(t--)
#define nitin          ios_base::sync_with_stdio(false); cin.tie(NULL)
#define PI             3.141592653589793238
using namespace std;

int32_t main() {
    nitin;
    w(t)
    {
        string s;
        cin>>s;
        int ans=0;
        int right=0;
        int left=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='>')
                left++;
            else if(s[i]=='<')
                right++;
            if(left>right)
                break;
            else if(left==right)
            {
                ans=max(ans,i+1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}