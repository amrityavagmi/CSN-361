#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
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
int toint(string s)
{
    int res=0;
    for(int i=0;i<sz(s);i++)
        res=10*res+(s[i]-'0');
    return res;
}
string tohex(int a)
{
    string res="";
    for(int i=0;i<2;i++)
    {
        int temp=a%16;
        if(temp<10)
            res=char(temp+'0')+res;
        else
            res=char(temp-10+'a')+res;
        a/=16;
    }
    return res;

}
int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin>>s;
    string temp="";
    vector<string>v;
    for(int i=0;i<sz(s);i++)
    {
        if(s[i]=='.')
        {
            //cout<<temp<<" "<<toint(temp)<<" "<<tohex(toint(temp))<<endl;
            v.pb(tohex(toint(temp)));
            temp="";
            continue;
        }
        temp=temp+s[i];
    }
    //cout<<temp<<" "<<toint(temp)<<" "<<tohex(toint(temp))<<endl;

    v.pb(tohex(toint(temp)));
    string ans=v[0]+v[1];
    ans=ans+':';
    ans=ans+v[2];
    ans=ans+v[3];
    cout<<ans;
    return 0;
}
