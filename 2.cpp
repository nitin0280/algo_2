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
    int n;
    cin>>n;
    vector<tuple<int,int,int>>query;
    set<int>s;
    w(q) {
        int a, b, val;
        cin >> a >> b >> val;
        query.push_back({a, b, val});
        s.insert(b);
    }
    s.insert(n);
    vector<int>points;
    for(auto c:s)
    {
        points.push_back(c);
    }
    sort(points.begin(),points.end());
    int N=points.size();
    vector<int>value_added(N,0);
    for(auto c:query)
    {
        int l=get<0>(c);
        int r=get<1>(c);
        int val=get<2>(c);
        int lidx=lower_bound(points.begin(),points.end(),l)-points.begin();
        int ridx=upper_bound(points.begin(),points.end(),r)-points.begin();
        value_added[lidx]+=val;
        if(ridx<N)
            value_added[ridx]-=val;
    }
    for(int i=1;i<N;i++){
        value_added[i]+=value_added[i-1];
    }
    for(int i=0;i<N;i++){
        points[i]+=value_added[i];
    }
    cout<<maxe(points.begin(),points.end())<<endl;
    return 0;
}