#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

string s; 
vi list; 

cin >> s; 

for(int i = 0; i < s.size(); i++){
    if(s[i] != '+'){
        list.pb(s[i] - '0'); 
    }
}

sort(list.begin(), list.end()); 

for(int i = 0; i < list.size(); i++){
    if(i == list.size() - 1){
        cout << list[i]; 
    }else{
        cout << list[i] << '+'; 
    }

}

   return  0; 
   
}