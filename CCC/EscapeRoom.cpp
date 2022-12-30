#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 
#define ll long long int

bool solve(map <int, vector<ii>> extra, int start, int end){
    
    if(start == end){
        return true; 
    }


    return false;
      
  }



int main(){

   ios::sync_with_stdio(0);cin.tie(0);
   short n, m; 
   cin >> n >> m;
   map<int, vector<ii>> tracker; 
   int start; 
   for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           int a; 
           cin >> a;
           if(i == 0 && j == 0)
                start == a;  
           tracker[a].pb(make_pair(i + 1, j + 1));   
       }
   }

    
    bool flag = solve(tracker, start, n*m); 

   if(flag){
       cout << "yes" << endl; 
   }else{
       cout << "no" << endl; 
   }



    return 0;
}