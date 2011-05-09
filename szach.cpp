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

typedef vector<int> VI;
typedef vector< VI > VVI;
typedef long long LL;
const int INF = ~(1<<31);
typedef pair<int, int> PII;
typedef vector< PII > VPII;
typedef vector< VPII > VVPII;
typedef vector<string> VS;
typedef vector<char> VC;



#define FOR(x,b,e) for(int x=b; x<=(e);++x)
#define FORD(x,b,e) for(int x=b; x>=(e);--x)
#define REP(x,n) for(int x=0;x<(n);++x)
#define ALL(X) (X).begin(),(X).end()
#define VAR(v,n) __typeof(n) v=(n)
#define SIZE(x) (int)x.size()
#define FORE(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define PB push_back
#define ST first
#define ND second
#define MP make_pair

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

char lut1[2] = {'.','W'};
bool lut2[256];


int main() {

	lut2['.']=false;
	lut2['W']=true;
	int n;
	scanf("%d",&n);

	char line[n+1];
	bool mapa[n][n];
	bool rows[n];
	bool cols[n];
	REP(i,n)
	{
		rows[i]=cols[i]=0;
	}
	int towers = 0;
	REP(i,n)
	{
		scanf("%s",line);
		REP(j,n)
		{
			if(mapa[i][j] = lut2[line[j]])
			{
				rows[i]=1;	
				cols[j]=1;
				towers++;
			}
		}
	}

	int ro=0,co=0;
	while(towers<n)
	{
		while(rows[ro])
		{
			ro++;
		}
		while(cols[co])
		{
			co++;
		}
		mapa[ro][co]=1;
		rows[ro]=1;
		cols[co]=1;
		towers++;
	}
	REP(i,n)
	{
		REP(j,n)
		{
			printf("%c",lut1[mapa[i][j]]);
		}
		printf("\n");
	}
 
  
	return 0;
}
