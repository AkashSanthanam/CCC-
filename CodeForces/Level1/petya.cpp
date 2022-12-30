#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


string a, b; 

cin >> a >> b; 

transform(a.begin(), a.end(), a.begin(), ::tolower);
transform(b.begin(), b.end(), b.begin(), ::tolower);


if(a < b){
    cout << "-1" << endl; 
}else if(a > b){
    cout << "1" << endl; 
}else{
    cout << "0" << endl; 
}

   return  0; 
   
}