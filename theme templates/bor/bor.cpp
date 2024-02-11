// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("sse4.2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

// #define int long long
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
template<typename T1, typename T2>
using pr = pair<T1, T2>;
int t = 1;

#ifdef LOCAL 
    #define fi freopen("input.txt", "r", stdin)
    #define fo freopen("output.txt", "w", stdout)
    #define ct cin >> t
#else 
    #define fi
    #define fo
    #define ct
#endif

#ifdef DEBUG
    #define cd cout << "============DEBUG===========\n";
    #define dbg(x) cout << #x << ": " << x << '\n';
#else
    #define cd
    #define dbg(x)
#endif

const int k = 33;

struct Vertex {
    bool is_term = false;
    Vertex* next[k];
};

Vertex* root = new Vertex();

void add (string s) {
    Vertex* v = root;
    for (auto c : s) {
        c -= 'a';
        if (v->next[c] == nullptr) {
            v->next[c] = new Vertex();
        }
        v = v->next[c];
    }
    v->is_term = true;
}

bool check (string s) {
    Vertex* v = root;
    for (auto c : s) {
        c -= 'a';
        if (v->next[c] == nullptr) return false;
    }
    return true;
}

void solve () {
    string s; cin >> s;
    add(s);
    int m; cin >> m;
    while (m--) {
        string a; cin >> a;
        cout << check(a) ? "Yes\n" : "No\n";
    }
}

void prerun () {
    fi; fo; ct; cd;
}

signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    prerun();

    while (t--) solve();

    return 0;
}