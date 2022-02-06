#include <iostream>
#include <vector>
#include <list>

using namespace std;

const int MAX = 200000;
int N, M, S, T;
vector<int> adj[MAX];
int deg[MAX];
vector<int> v_s, v_t;
int min_cost[MAX];

void get_input() {
	cin >> N >> M >> S >> T;

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		u--; v--;

		adj[u].push_back(v);
		adj[v].push_back(u);
		deg[u]++; deg[v]++;
	}

	int x;
	for (int i = 0; i < S; i++) {
		cin >> x;
		x--;
		v_s.push_back(x);
	}

	for (int i = 0; i < T; i++) {
		cin >> x;
		x--;
		v_t.push_back(x);
	}
}

bool discover[MAX];
int layer[MAX];

void init() {
	for (int i = 0; i < N; i++) {
		discover[i] = false;
	}
}

void bfs(int s) {
	list<int> Q;
	Q.push_back(s);
	layer[s] = 0;
	discover[s] = true;

	while (!Q.empty()) {
		int u = Q.front();
		Q.pop_front();
		for (int i = 0; i < deg[u]; i++) {
			int v = adj[u][i];
			if (!discover[v]) {
				Q.push_back(v);
				discover[v] = true;
				layer[v] = layer[u] + 1;
				if (layer[v] < min_cost[v]) {
					min_cost[v] = layer[v];
				}
			}
		}
	}
}

void solve() {
	for (auto it = v_t.begin(); it != v_t.end(); it++) {
		min_cost[*it] = MAX;
	}
	
	for (auto it = v_s.begin(); it != v_s.end(); it++) {
		init();
		min_cost[*it] = 0;
		bfs(*it);

		for (auto it = v_t.begin(); it != v_t.end(); it++) {
			cout << min_cost[*it] << endl;
		}
		cout << endl;
	}

}


int main() {
	get_input();

	solve();

	return 0;
}
