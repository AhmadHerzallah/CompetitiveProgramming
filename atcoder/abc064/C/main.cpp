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
#include <utility>
 
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
#define srt(v) sort(v.begin(),v.end())
#define ld long double
#define scanArray(a,n) for(int i = 0; i < n; i++){cin >> a[i];}
#define coutArray(a,n) for(int i = 0; i < n; i++){cout << a[i] << " ";};cout << endl;
#define coutSet(set) for (auto it = set.begin(); it !=  set.end(); ++it) {cout << *it << " "};cout << endl;

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
int decimalToOctal(int decimalNumber) {
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0) {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}



int32_t main()
{
    fast;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	int t; cin>>t;
	int arr[8]= {0};
	int tot = 0;
	rep(_, t) {
		int a; cin>>a;
		if (a <= 399)
		{
			arr[0]++;
		} else if (a <= 799)
		{
			arr[1]++;
		} else if (a <= 1199)
		{
			arr[2]++;
		} else if (a <= 1599)
		{
			arr[3]++;
		} else if (a <= 1999)
		{
			arr[4]++;
		} else if (a <= 2399)
		{
			arr[5]++;
		} else if  (a <= 2799)
		{
			arr[6]++;
		} else if (a <= 3199)
		{
			arr[7]++;
		} else {
			tot += 1;
		}
	}
	int total = 0;
	for(int elem: arr){
		if (elem > 0)
		{
			total++;
		}
	}
	int allT = total + tot;
	int x = 0;
	if (1 > total)
	{
		x = 1;
	} else if (1 < total)
		x = total;
	cout<<x<<" "<<allT;
}