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

struct Node{

	int num;
	Node* next;
	Node (int, NULL) :  num(int), next(NULL);
};


void reverse(Node* root){

	Node * cur, * next, * prev;
	cur = root;
	prev = NULL;
	while(cur!=NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = prev->next;
	}

}




int main(){
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
	
	cout << "YES\n";

	//Node* root;

	//reverse(root);

	//while(root->next != NULL){
//		cout << root->num << " ";
//		root = root->next;
//	}	

	
	return 0;
}


1 2 3 4 


1 3
2 4

