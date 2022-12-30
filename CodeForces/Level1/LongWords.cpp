#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<string> vs; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

int n; 
vs list; 
cin >> n; 

for(int i = 0; i < n; i++){
    string s;
    string digit; 
    cin >> s; 
    if(s.size() > 10){
       digit = to_string(s.size() - 2); 
    }else{
        list.pb(s);
        continue; 
    }

    string answer = s[0] + digit + s[s.size() - 1]; 
    list.pb(answer); 
}


for(int i = 0; i < list.size(); i++){
    cout << list[i] << endl; 
}


   return  0; 
   
}