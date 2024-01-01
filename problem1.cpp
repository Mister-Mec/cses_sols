#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t; 
    while(t--){
        int n;
        cin>>n; 
        string s; 
        cin>>s;
        set<char> s1; 
        for(int i = 0; i < n; i++) s1.insert(s[i]); 
        int ind = s1.size();
        int l = 1; 
        long long ans = 0;
        for(auto it = s1.begin(); it != s1.end(); it++){
            cout << *it << endl;
            cout << "11" << endl;
            int t = s.find(*it); 
            ans += (n-t);
        }
        cout<<ans<<endl;
    }
    return 0;
}
