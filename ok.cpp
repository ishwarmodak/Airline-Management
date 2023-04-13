#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    string s;
    cin >> s;
    if(s.size()==1) cout<<s<<endl;
    else{
      int k;
      if(s.size()<10){
         k = stoi(s);
      }
      else{
         k = 0;
      }
    
    if(k<20) cout<<k<<endl;
    else{
        char temp1 = s[s.size()-1]; cout<<temp1<<endl;
        char temp2 = s[s.size()-2];
        int ans = (int)(temp1)*10 + (int)(temp2);
        cout<<(ans%20)<<endl;
    }
    }
}
 
signed main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t; cin>>t;
while(t--){
  solve();
}
 
return 0;
}