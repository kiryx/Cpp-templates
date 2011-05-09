struct FAU {
	int *p,*w;

	FAU(int n) : p(new int[n]), w(new int[n]) {
		REP(x,n) p[x] = w[x] = -1;
	}
	~FAU(){
		delete[] p;delete[] w;
	}
	int Find(int x) {
		return (p[x] < 0) ? x : p[x]=Find(p[x]);
	}
	void Union(int x, int y) {
		if((x = Find(x)) == (y = Find(y))) return;
		if(w[x] > w[y]) p[y] = x;
		else p[x] = y;
		if(w[x]==w[y]) w[y]++;
	}
};
