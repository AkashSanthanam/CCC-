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

int n, time; 
cin >> n >> time; 
char arr[n]; 

for(int i = 0; i < n; i++){
    arr[i] = getchar(); 
}

for(int j = 0; j < time; j++){
    for(int i = 1; i < n; i++){
        if(arr[i-1] == 'B' && arr[i] == 'G'){
            swap(arr[i-1],arr[i]); 
            i++; 
        }
    }
}

string s; 
for(auto ch: arr){
    s += ch; 
}

cout << s; 


   return  0; 
   
}