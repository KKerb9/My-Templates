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

const ld EPS = 1e-8;

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
    #define cd cout << "============DEBUG============\n";
    #define dbg(x) cout << #x << ": " << x << '\n';
#else
    #define cd
    #define dbg(x)
#endif

int sgn (ld a) {
    if (a > EPS) {
        return 1;
    } else if (a < EPS) {
        return -1;
    } else {
        return 0;
    }
}

bool eq (ld a, ld b) {
    return abs(a - b) <= EPS;
}

bool sml (ld a, ld b) {
    return a + EPS < b;
}

bool grt (ld a, ld b) {
    return a - EPS > b;
}

bool smleq (ld a, ld b) {
    return a - EPS <= b;
}

bool grteq (ld a, ld b) {
    return a + EPS >= b;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

struct pt {
    ld x = 0;
    ld y = 0;
    pt () = default;
    explicit pt (ld x, ld y) : x(x), y(y) {
    }
    explicit pt (const pt& from, const pt& to) {
        x = to.x - from.x;
        y = to.y - from.y;
    }

    pt perp() const {
        return pt(-y, x);
    }
    ld lenlen() const {
        return x * x + y * y;
    }
    ld len() const {
        return sqrt(x * x + y * y);
    }
    pt operator+ (const pt& other) const {
        return pt(x + other.x, y + other.y);
    }
    pt operator- (const pt& other) const {
        return pt(x - other.x, y - other.y);
    }
    ld operator^ (const pt& other) const {  // скалярное
        return x * other.x + y * other.y;
    }
    ld operator% (const pt& other) const {  // векторное
        return x * other.y - y * other.x;
    }
    pt operator* (ld d) const {
        return pt(x * d, y * d);
    }

    bool operator== (const pt& other) const {
        return eq(x, other.x) && eq(y, other.y);
    }

    bool operator< (const pt& other) const {
        return sml(x, other.x) || sml(y, other.y);
    }
};

istream& operator>> (istream& in, pt& x) {
    in >> x.x >> x.y;
    return in;
}

ostream& operator<< (ostream& out, pt& x) {
    out << x.x << ' ' << x.y;
    return out;
}

ld angle (pt& a, pt& b) {
    return atan2(a % b, a ^ b);
}

//#define ve pt;
using ve = pt;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct line {
    ld a = 0;
    ld b = 0;
    ld c = 0;
    line () = default;
    line (ld a, ld b, ld c ) : a(a), b(b), c(c) {
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve () {
    
}

void prerun () {
    fi; fo; ct; cd;
}

int32_t main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    prerun();

    cout << fixed << setprecision(15);

    while (t--) solve();

    return 0;
}
