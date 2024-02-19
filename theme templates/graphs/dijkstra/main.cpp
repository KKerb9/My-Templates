#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
const int INF = 1e9;

vector<int> dijkstra (vector<vector<pii>>& graph, int n, int s, int f) {
    vector<int> dist(n, INF);
    dist[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> notVis;
    notVis.emplace(dist[s], s);
    while (!notVis.empty()) {
        auto [d, v] = notVis.top();
        notVis.pop();
        if (v == f) break;
        if (d > dist[v]) continue;
        for (auto u : graph[v]) {
            if (dist[u.first] > dist[v] + u.second) {
                dist[u.first] = dist[v] + u.second;
                notVis.emplace(dist[u.first], u.first);
            }
        }
    }
    return dist;
}