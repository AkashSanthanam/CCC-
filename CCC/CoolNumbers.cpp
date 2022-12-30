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

int a,b, count = 0; 
cin >> a >> b; 
vi list; 

for(int  i = 1; i <= 21; i++){
    list.pb(pow(i, 6)); 
}

for(auto x : list){
    if(x >= a && x <= b){
        count++; 
    }
}

cout << count << endl; 

   return  0; 
   
}