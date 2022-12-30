#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 
#define ll long long int

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

ll n, x, a = 0, b = 0; 
map <ll, ll> set; 
cin >> n;
for(ll i = 0; i < n; i++){
    cin >> x; 
    set[x] = i; 
}

int m;
cin >> m;
int arr[m];
for(ll i = 0; i < m; i++){
    cin >> arr[i]; 
}


for(ll i = 0; i < m; i++){
    int index = set[arr[i]]; 
    a += index + 1; 
    int diff = n - index;
    b += diff; 
}

cout << a  << " " << b << endl;  

   return  0; 
   
}