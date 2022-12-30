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

int n; 
cin >> n; 
double arr[n]; 
double size; 
vector <double> midpoints; 
for(int i = 0 ; i < n; i++){
    cin >> arr[i]; 
}

sort(arr, arr + n); 

for(int i = 1; i < n; i++){
   double mid = (arr[i] + arr[i-1])/2; 
   midpoints.pb(mid); 
}

sort(midpoints.begin(), midpoints.end()); 

for(unsigned int i = 1; i < midpoints.size(); i++){
    double tempSize = midpoints[i] - midpoints[i-1]; 
    if(i == 1){
        size = tempSize; 
    }else if(size > tempSize){
        size = tempSize; 
    }
}

cout << fixed << setprecision(1) << size;



   return  0; 
   
}