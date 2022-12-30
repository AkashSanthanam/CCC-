#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);
cin.tie(0);

vi tracker; 
string x; 
cin >> x;

for(int i = 0 ; i < x.size(); i++){
    if(x.substr(i, 2).compare("--") == 0){
        tracker.pb(2); 
        i++; 
    }else if(x.substr(i, 2).compare("-.") == 0){
        tracker.pb(1); 
        i++; 
    }else{
        tracker.pb(0); 
    }
}

for(auto x: tracker){
    cout << x; 
}

   return  0; 
   
}