#include<iostream>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<utility>
#include<sstream>
#include<cstring>
#include<numeric>
using namespace std;

#define FOR(x,b,e) for(int x=b; x<=(e);++x)
#define fo(x,b,e) for(int x=b; x<=(e);++x)
#define fi(n) for(int i=0;i<(n);++i)
#define fj(n) for(int j=0;j<(n);++j)
#define fk(n) for(int k=0;k<(n);++k)
#define re(x,n) for(int x=0;x<(n);++x)
#define FORD(x,b,e) for(int x=b; x>=(e);--x)
#define REP(x,n) for(int x=0;x<(n);++x)
#define VAR(v,n) __typeof(n) v=(n)
#define ALL(c) c.begin(),c.end()
#define SIZE(x) (int)x.size()
#define FORE(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define PB push_back
#define ST first
#define ND second
#define MP make_pair

typedef vector<string> VS;
VS parse(string s)
{
  string a;
  VS wyn;
  REP(i,(int)s.size())
    if (s[i]!=' ') a+=s[i];
    else if (!a.empty()) { wyn.PB(a); a=""; }
  if (!a.empty()) wyn.PB(a);
  return wyn;
}

typedef vector<int> VI;
typedef vector< VI > VVI;
typedef long long LL;
const int INF = ~(1<<31);
typedef pair<int, int> PII;
typedef vector< PII > VPII;
typedef vector< VPII > VVPII;
typedef vector<char> VC;

int main() {
 
  
	return 0;
}
