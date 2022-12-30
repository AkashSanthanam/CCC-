#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

long long int a; 

cin >> a;  

int count  = 0; 

while(true){
    int lastD = a % 10; 
    if(lastD == 4 || lastD == 7 ){
        count++; 
    }
    a /= 10;
 
    if(a == 0){
        break; 
    }
}



if(count == 4 || count  == 7){
    cout << "YES" << endl; 
}else{
    cout << "NO" << endl; 
}


   return  0; 
   
}