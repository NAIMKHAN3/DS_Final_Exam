#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n;
        set<int> s;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        for(auto it: s){
            cout << it << " ";
        }
        cout<<endl;
    }
    return 0;
}