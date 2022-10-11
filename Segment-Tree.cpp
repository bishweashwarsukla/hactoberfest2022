#include <bits/stdc++.h>
using namespace std;
#define ll long long

class sgTree
{

    ll N;
    vector<ll> a, stree;

public:
    sgTree(vector<ll> arr, ll n)
    {
        // N = 1e5 + 2;
        N = n;
        a = arr;
        stree = vector<ll>(4 * N);
        buildST(1, 0, n - 1);
    }

    void buildST(ll node, ll st, ll en)
    {

        if (st == en)
        {
            stree[node] = a[st];
            return;
        }

        ll mid = (st + en) >> 1;
        buildST(2 * node, st, mid);
        buildST(2 * node + 1, mid + 1, en);

        // Taking tree to be 1 indexed
        // left child = 2*node          right child = 2*node + 1

        stree[node] = stree[2 * node] + stree[2 * node + 1];
        // Question Logic here
    }

    ll queryST(ll node, ll st, ll en, ll l, ll r)
    {

        if (en < l || st > r)
        {
            return 0;
            // return acc to Question's concept
        }

        if (l <= st && en <= r)
        {
            return stree[node];
        }

        ll mid = (st + en) >> 1;
        // return acc to Question's concept
        return queryST(2 * node, st, mid, l, r) + queryST(2 * node + 1, mid + 1, en, l, r);
    }

    // Just like BST but differs in the sense of updation of parents using backtracking
    void updateST(ll node, ll st, ll en, ll idx, ll new_val)
    {

        if (st == en)
        {
            a[st] = new_val;
            stree[node] = new_val;
            return;
        }

        ll mid = (st + en) >> 1;

        if (idx <= mid)
        {
            updateST(2 * node, st, mid, idx, new_val);
        }
        else
        {
            updateST(2 * node + 1, mid + 1, en, idx, new_val);
        }

        // BackTrack
        stree[node] = stree[2 * node] + stree[2 * node + 1];
    }
};
