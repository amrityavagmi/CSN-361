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
    freopen("alterout.txt","r",stdin);

    string n,k;
    cin>>n>>k;
    string s=n;
    while(comp(n,k))
    {
        int i=0;
        while(n[i]=='0')
            i++;
        for(int j=0;j<sz(k)&&i+sz(k)-1<sz(n);j++)
        {
           int n1=n[i+j]-'0';
           int k1=k[j]-'0';
           n[i+j]=char((n1^k1)+'0');
        }
    }
    for(int i=0;i<sz(n);i++)
        if(n[i]!='0')
    {
        cout<<"not correct\n";
        return 0;
    }
    cout<<"correct\n";


    return 0;
}

