#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered Set with less_equal to handle duplicates by counting them as greater
template <class T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Macros for quick typing and readability
#define int long long  // Use long long for int by default
#define fi first
#define se second
#define MASK(i) (1LL << (i))
#define CNT_BIT(i) __builtin_popcountll(i)
#define BIT(x, i) ((x) & MASK(i))
#define SET_BIT(x, i) ((x) | MASK(i))
#define CLEAR_BIT(x, i) ((x) & ~MASK(i))
const double PI = acos(-1.0);
#define DEG_TO_RAD(x) ((x) * PI / 180)
#define TWO_DIM_VECTOR(n, m, value) vector<vector<int>>(n + 1, vector<int>(m + 1, value))
#define ALL(a) (a).begin(), (a).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef complex<int> Point;
constexpr int MAX_N = 1e6;

const double EPS = 1e-13;
const int MOD = 1e9 + 7;
const double INF = 1e15 + 7;
const int LG_MAX = 21;
const int BASE = 311;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

// Function prototypes
void solve();

// Creator macro
#define CREATOR "Quynh Thu"

void QuynhThu(bool multiTest) {
    int numTest = 1;
    if (multiTest) cin >> numTest;
    while (numTest--) {
        solve();
    }
    // Optional: Code for measuring execution time
    // clock_t start = clock();
    // solve();
    // clock_t end = clock();
    // cerr << "Time taken: " << double(end - start) / CLOCKS_PER_SEC << " seconds\n";
}

signed main() {
    FAST_IO
    QuynhThu(false);  // Change to true for multiple test cases
}

void solve() {
    // Solution logic goes here
}
