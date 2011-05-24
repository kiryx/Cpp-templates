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
typedef int t_int;
typedef int tl_int;

#define FOR(x,b,e) for(tl_int x=b; x<=(e);++x)
#define FORD(x,b,e) for(tl_int x=b; x>=(e);--x)
#define REP(x,n) for(tl_int x=0;x<(n);++x)
#define VAR(v,n) __typeof(n) v=(n)
#define ALL(c) c.begin(),c.end()
#define SIZE(x) (tl_int)x.size()
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
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

typedef vector<t_int> VI;
typedef vector< VI > VVI;
typedef long long LL;
typedef vector<LL> VLL;
const t_int INF = ~(1<<31);
typedef pair<t_int, t_int> PII;
typedef vector< PII > VPII;
typedef vector< VPII > VVPII;
typedef vector<char> VC;
typedef vector<VC > VVC;

int main() {
 
  
	return 0;
}
