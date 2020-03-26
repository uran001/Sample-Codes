#include<bits/stdc++.h>
using namespace std;
int main(){
    

    freopen("input.txt", "r", stdin);
    
       
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    map<int, set<int>> mp;

    int n;
    cin >> n;
    for(int i = 0; i < 10; i ++){
        int x;
        cin >> x;
        mp[x].insert(x);
        for(int j = 0; j < 9; j ++){
            int y;
            cin >> y;
            mp[x].insert(y);
            mp[y].insert(x);
        }
    }

    int ans = 0;
    for(auto x: mp){
        
        if(x.second.size() < n){
            //cout << x.first << " " << x.second.size() << " T\n";
            int cur = 1;
            for(auto y : x.second){
                if(x.first != cur){
                    for(int i = cur; i < y; i ++)
                        ans ++;
                    cur = y;
                }
                else if(x.first == cur)
                    cur ++;
                cur ++;
            }
        }
    }


    cout << (ans * (ans - 1)) / 2;
}