/*input

*/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iterator>
#include <cstdlib>
#include <unordered_map>
#include <map>
#include <list>

using namespace std;

#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define int int64_t
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr<<v<<" ";
        return *this;
    }
} dbg;

bool check_key(map<int, int> m, int key)
{
    if (m.find(key) == m.end())
        return false;

    return true;
}


vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));


    vector<int> res;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
        if (prime[p])
            res.push_back(p);
    //cout << p << " ";
    return res;
}



int32_t main()
{
    fast;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int h, w; cin>>h>>w;
    int allItems[h][w];
    int a, b;
    int samevalue = 0, diffrence = 0;
    rep(i, h) {
    	rep(j, w) {
    		int num = 0;
    		cin>>num;
    		allItems[i][j] = num;
    	}
    }
    rep(i, h){
    	rep(j, w) {
    		if (allItems[i][j] > allItems[i][j+1])
    		{
    			a = allItems[i][j];
    			b = allItems[i][j+1];
    			break;
    		} else if (allItems[i][j] == allItems[i][j+1] && allItems[i][j] == allItems[i][j+2])
    		{
    			samevalue = allItems[i][j];
    		}

    	}
    }
	if (samevalue != 0 && a == 0 && b == 0)
	{
		cout<<0;
	} else {
	int smallest = min(a, b);
	int largest = max(a, b);
	diffrence = largest - smallest;
	if (diffrence == 0)
	{
		diffrence = largest;
	}
	int counts = 0;
	rep(i, h) {
		rep(j, w) {
		while(smallest != allItems[i][j]){
			allItems[i][j] -=  diffrence;
			counts += diffrence;
	}
		}
	}
	cout<<counts<<endl;

	}

}