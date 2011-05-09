template <class V, class E> struct Graph {
	struct Ed : E {
		int v;
		Ed(E p, int w) : E(p), v(w) { }
	};
	struct Ve : V, vector<Ed> { };
	vector<Ve> g;
	Graph(int n = 0) : g(n) { }
	void Write() {
		REP(i,SIZE(g)) {
			cout<< i << ":";
			FOREACH(it,g[i])
				cout<< " " << it->v;
			cout<< endl;
		}
	}
	void EdgeU(int b, int e, E d = E()) {
		Ed eg(d,e);
		eg.rev = SIZE(g[e]) + (b==e);
		g[b].PB(eg);
		eg.rev = SIZE(g[eg.v = b]) - 1;
		g[e].PB(eg);
	}
	void EdgeD(int b, int e, E d = E()) {
		g[b].PB(Ed(d,e));
	}
};
struct Empty { };
struct MyEdge { int rev; };
