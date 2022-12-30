#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


int a; 
cin >> a; 
int count = 0; 

int arr[3]; 

for(int i = 0; i < a; i++){
   int x, y, z; 

   cin >> x >> y >> z; 
   if(x == 1 && y == 1){
      count++; 
   }else if(y == 1 && z == 1){
      count++;  
   }else if(x == 1 && z == 1){
      count++; 
   }

}

cout << count << endl; 


   return  0; 
   
}