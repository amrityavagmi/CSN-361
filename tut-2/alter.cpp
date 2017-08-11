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
int main(int argc,char **argv)
{
    freopen("in.txt","r",stdin);
    freopen("in.txt","w",stdout);
    string s=argv[1];
    int pos=0;
    for(int i=0;i<sz(s);i++)
        pos=pos*10+(s[i]-'0');
    string n,k;
    cin>>n>>k;
    if(pos>sz(n))
    {
        cout<<"out of index\n";
        return 0;
    }
    n[pos-1]=char(1-(n[pos-1]-'0')+'0');
    cout<<n<<endl<<k<<endl;

    return 0;
}

