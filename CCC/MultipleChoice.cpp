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

int n, count = 0; 
cin >> n; 
vector<char> listQ, listA; 

for(int  i = 1; i <= 2*n; i++){
    char ch; 
    cin >> ch; 
    if(i > n){
        listA.pb(ch); 
    }else{
        listQ.pb(ch); 
    }
    
}

for(int i = 0; i < n; i++){
    if(listQ[i] == listA[i]){
        count++; 
    }
}

cout << count << endl; 
   return  0; 
   
}