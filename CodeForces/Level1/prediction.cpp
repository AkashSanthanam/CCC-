#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


int n, m; 
cin >> n >> m; 
bool flag = false; 
n++; 
for(int i = n; i <= m; i++){
    bool isPrime = true; 
    for(int j = 2; j < i; j++){
        if(i % j == 0){
            isPrime = false; 
            break; 
        }
    }
    if(isPrime == true){
        if(i == m){
            flag = true; 
            break; 
        }else if(i < m){
            break; 
        }
    }
}   

if(flag){
    cout << "YES" << endl; 
}else{
    cout << "NO" << endl; 
}

   return  0; 
   
}