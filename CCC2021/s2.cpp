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

   int m;
   int n;
   int k;
   cin >> m >> n >> k; 
   int tracker1 = 0;
   int tracker2 = 0; 
   int rows[m]; 
   int col[n];  


   for(int i = 0; i < m; i++){
       rows[i] = 0; 
   }

   for(int i = 0; i < n; i++){
       col[i] = 0; 
   }


   while(k--){
       int x; 
       char ch;
       cin >> ch >> x; 
       if(ch == 'R'){
           if(rows[x-1] == 1){
               rows[x-1] = 0; 
           }else{
               rows[x-1] = 1; 
           }
       }else{
           if(col[x-1] == 1){
               col[x-1] = 0; 
           }else{
               col[x-1] = 1; 
           }
       }
   }


   for(int i = 0; i < m; i++){
       if(rows[i] == 1){
           tracker1++; 
       }
   }

   for(int i = 0; i < n; i++){
       if(col[i] == 1){
           tracker2++; 
       }
   }



    int output = ((tracker1 * n) + (tracker2 * m)) - (2*tracker1*tracker2);  


    cout << output << endl; 




  return 0;
}