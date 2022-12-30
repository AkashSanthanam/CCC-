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

   int n; 
   cin >> n;
   double sum = 0; 
   double addition[n]; 
   double heights[n+1]; 
   double widths[n];  

   for(int i = 0 ; i < n + 1; i++){
       cin >> heights[i];  
   }

   for(int i = 0 ; i < n; i++){
       cin >> widths[i]; 
   }

   for(int i = 1; i < n+1; i++){
       addition[i-1] = heights[i] + heights[i-1]; 
   }

    for(int i = 0 ; i < n; i++){
        double area = (addition[i]*widths[i])/2; 
        sum += area; 
    }


    cout << sum << endl; 

   
    return 0;
}