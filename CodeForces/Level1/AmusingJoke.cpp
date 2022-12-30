#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);




string guest, host, pile; 

cin >> guest >> host >> pile; 
bool flag = true; 
int count[26] = {0}; 
int check[26] = {0}; 

for(int i = 0; i < guest.size(); i++){
    int ch = (int)guest[i]; 
    count[ch - 65] += 1; 
}

for(int i = 0; i < host.size(); i++){
    int ch = (int)host[i]; 
    count[ch - 65] += 1; 
}

for(int i = 0; i < pile.size(); i++){
    int ch = (int)pile[i]; 
    check[ch - 65] += 1; 
}

for(int i = 0; i < 26; i++){
    if(count[i] != check[i]){
        flag = false; 
    }
}

if(flag){
    cout << "YES" << endl; 
}else{
    cout << "NO" << endl; 
}



   return  0; 
   
}