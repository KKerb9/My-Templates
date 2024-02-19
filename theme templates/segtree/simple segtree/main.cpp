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
using pii = pair<int, int>;
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

struct Node {

};

template<typename T>

struct SegTree {
    const int MAXN = 5e5;
    vector<T> st (MAXN * 4);
    
    T merge (const T&, const T&);
    void set_val(int, int);

    SegTree(int mn, void(*func1)(int, int), T(*func2)(const T&, const T&)) {
        MAXN = mn;
        merge = func2;
        set_val = func1;
    }

    void build (void(*set_val)(int, int) int v, int l, int r) {
        if (r - l == 1) {
            return set_val(v, l);
        }
        int mid = (r + l) / 2;
        build(2 * v + 1, l, mid);
        build(2 * v + 2, mid, r);
        st[v] = merge(st[2 * v + 1], st[2 * v + 2]);
    }

    void update (int i, T& x, int v, int l, int r) {
        if (r - l == 1) {
            st[v] += x;
            return;
        }
        int mid = (r + l) / 2;
        if (i < mid) {
            update(i, x, 2 * v + 1, l, mid);
        } else {
            update(i, x, 2 * v + 2, mid, r);
        }
        st[v] = merge(st[2 * v + 1], st[2 * v + 2]);
    }

    T get (int ql, int qr, int v, int l, int r) {
        if (qr <= l || r <= ql) {
            T res;
            return res;
        } 
        if (ql <= l && r <= qr) {
            return st[v];
        }
        int mid = (r + l) / 2;
        return merge(get(ql, qr, 2 * v + 1, l, mid), get(ql, qr, 2 * v + 2, mid, r));
    }
};



void solve () {
    
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