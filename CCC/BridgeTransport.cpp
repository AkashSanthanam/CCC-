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


int maxWeight, values, n, sum = 0, cars = 0; 
deque <int> wOfCars; 
cin >> maxWeight >> n;
 

for(int i = 0; i < n; i++){
    cin >> values; 
    wOfCars.pb(values); 
    sum += wOfCars.back();  
    if(sum > maxWeight){
        break; 
    }
    cars++; 
    if(i >= 3){
        sum -= wOfCars.front(); 
        wOfCars.pf(); 
    }
}

cout << cars << endl; 





    return 0; 
}