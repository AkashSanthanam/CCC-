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

int radius;

vi ans;  
while(cin >> radius){
    int count = 0; 
    if(radius == 0){
        break; 
    }
    for(int y = 0; y <= radius; y++){
        for(int x = 0; x <= radius; x++){
            if(x*x + y*y <= radius*radius){
                count++; 
        }
    }
    }

    ans.pb(count); 
    

}

for(auto x : ans){
    cout << x << endl; 
}

   return  0; 
   
}
