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
#define init(type, n) type n; cin>>n;

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

void modSolution(){
	int n; cin>>n;
	long long output = 1;
	for(int i = 1; i <= n; i++){
		output = ((output * i)%mod + mod)%mod;
	}
	cout<<output;
}

int32_t main()
{
    fast;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	init(int, a);
	init(int, b);
	init(int, c);
    string array[3] = {"Takahashi", "Aoki", "Takahashi"};
    int array2[2] = {a,b};
    if(a == b){
        cout<<array[c+1];
        return 0;
    }
    int maxElem = max(a,b);
    int index = 0;

    rep(i,2){
        if(array2[i]==maxElem){
            index=i;
        }
    }

    cout<<array[index];
}