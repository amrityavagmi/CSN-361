#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
#include<iomanip>
#include<stdio.h>
#include<limits>
#include<map>
#include<set>
#include<list>
#include<vector>
#include<stack>
#define gcd __gcd
#define pb(x) push_back(x)
#define ll long long
#define in(x) scanf("%d",&x)
#define mod 1000000007
#define sz(x) x.size()
#define pii pair<ll,ll>
#define mst(x,a) memset(x,a,sizeof(x))
#define F first
#define S second
#define m_p make_pair
#define all(v) (v.begin(),v.end())
using namespace std;
bool comp(string s,string k)
{
    int n=sz(s);
    int k1=sz(k);
    string kdash="";
    for(int i=0;i<n-k1;i++)
    {
        kdash=kdash+'0';
    }
    kdash=kdash+k;
    return (s>=kdash);
}
int main()
{
    freopen("genout.txt","w",stdout);
        freopen("genin.txt","r",stdin);

    string n,k;
    cin>>n>>k;
    string nn=n;
    for(int i=0;i<sz(k)-1;i++)
        nn=nn+'0';
    int rem=0;
    string s=nn;
    while(comp(nn,k))
    {
        int i=0;
        while(nn[i]=='0')
            i++;
        for(int j=0;j<sz(k)&&i+sz(k)-1<sz(nn);j++)
        {
           int nn1=nn[i+j]-'0';
           int k1=k[j]-'0';
           nn[i+j]=char((nn1^k1)+'0');
        }
    }
    for(int i=0;i<sz(nn);i++)
        nn[i]=char(((nn[i]-'0')^(s[i]-'0'))+'0');
    cout<<nn<<endl;
    cout<<k<<endl;
    return 0;
}

