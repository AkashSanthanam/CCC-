#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 
#define ll long long int

int main()
{
ios::sync_with_stdio(0);cin.tie(0);


int n, ans = 0, sum = 0; 
cin >> n; 
int arr[n];  
for(int i = 0; i < n; i++){
    cin >> arr[i];
}

for(auto x: arr){
    sum += x; 
}

int i = 1;
n++; 
while(true){
    if(n*i + 1 > sum){
        int x = n*i + 1 - sum; 
        ans += x + 1; 
        break; 
    }
    i++; 
}
    

cout << ans << endl; 


 
    return 0;
}