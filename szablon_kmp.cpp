#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> VI;
typedef vector< VI > VVI;
typedef long long LL;
const int INF = 1000000001;
typedef pair<int, int> PII;
typedef vector< PII > VPII;
typedef vector< VPII > VVPII;

#define FOR(x,b,e) for(int x=b; x<=(e);++x)
#define FORD(x,b,e) for(int x=b; x>=(e);--x)
#define REP(x,n) for(int x=0;x<(n);++x)
#define VAR(v,n) __typeof(n) v=(n)
#define ALL(c) c.begin(),c.end()
#define SIZE(x) (int)x.size()
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define PB push_back
#define ST first
#define ND second


int main() {
	
	string s = "ABABBADABABA"; //12 (3):ABA
	
	int Pi[s.length()+1],b;

	Pi[0] = b = -1;
	FOR(i,1,s.length())
	{
		while((b>-1) && (s[b] != s[i-1])) b = Pi[b];
		Pi[i] = ++b;
	}
	REP(i,s.length()+1)
	{
		cout<<Pi[i]<<" ";
	}
	cout<<endl;
	cout << b << endl; 
  
	return 0;
}
