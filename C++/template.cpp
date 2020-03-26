#include <bits/stdc++.h>

#define name ""
#define fs first
#define sc second
#define mp make_pair
#define pb push_back
#define sz(s) ((int) s.size ())
#define all(s) s.begin (), s.end ()
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
const int N = 100005;
const double eps = 1e-11;
const int inf = (int) 2e9;
const int mod = (int) 1e9 + 7;

int main(){
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
	int n;
	cin >> n;

	map<int, std::vector<int>> mp;

	for(int i = 0; i < n; i ++){
		int x, y;
		cin >> x >> y;
		mp[x].push_back(x);
		mp[y].push_back(y);
	}

	map<int, int> sol;

	//stack<auto> st;
	for(auto i : mp){
		if(sol[i] == 0){
			int ans = 0;
			int vis[N + 1];
			memset(vis, 0, sizeof(vis));
			stack<std::vector<int>> st;
			st.push_back(i.second);
			vis[i.first] = 1;
			while(!st.empty()){
				auto top = st.top();
				st.pop();
				ans ++;
				for(auto x : top){
					if(vis[x] == 0)
						st.push(mp[x]);
				}
			}
			sol[i] = ans;
		}
		else{
			
		}

	}
	return 0;
}