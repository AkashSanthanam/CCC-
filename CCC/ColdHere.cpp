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

string s; 
vi track; 
map <int, string> list; 
while(cin >> s){
    int x; 
    cin >> x; 
    track.pb(x); 
    list[x] = s; 
    if(s == "Waterloo"){
        break; 
    }
}

sort(track.begin(), track.end()); 
cout << list[track.front()]; 

   return  0; 
   
}