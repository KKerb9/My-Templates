// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("sse4.2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

// #define int long long
#define all(x) x.begin(), x.end()

// #include <ext/pb_ds/assoc_container.hpp>

// using namespace __gnu_pbds;

// using ordered_set = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

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
