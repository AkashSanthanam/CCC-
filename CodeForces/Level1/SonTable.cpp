#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);



int n; 
string s; 
cin >> n; 
cin >> s; 
int count = 0; 

for(int i = 1; i < s.size(); i++){
    if(s[i] == s[i-1]){
        count++; 
    }
}

cout << count << endl; 







   return  0; 
   
}