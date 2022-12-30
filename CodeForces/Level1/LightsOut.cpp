#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

int arr [3][3]; 

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cin >> arr[i][j]; 
    }
}


for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(arr[i][j] % 2 == 1){
            arr[i][j] = 0; 
          if(i == 0 && j == 0){
            arr[i][j+1] = 0; 
            arr[i-1][j] = 0;   
          }else if(i == 0 && j == 1){
            arr[i][j-1] = 0;
            arr[i][j+1] = 0;  
            arr[i-1][j] = 0; 
          }else if(i == 0 && j == 2){
            arr[i][j-1] = 0;
            arr[i-1][j] = 0;  
          }else if(i == 1 && j == 0){
            arr[i+1][j] = 0; 
            arr[i][j+1] = 0; 
            arr[i-1][j] = 0; 
          }else if(i == 1 && j == 1){
            arr[i+1][j] = 0; 
            arr[i-1][j] = 0; 
            arr[i][j-1] = 0; 
            arr[i][j+1] = 0; 
          }else if(i == 1 && j == 2){
            arr[i][j-1] = 0;
            arr[i+1][j] = 0;  
            arr[i-1][j] = 0; 
          }else if(i == 2 && j == 0){    
              arr[i+1][j] = 0; 
              arr[i][j+1] = 0; 
          }else if(i == 2 && j == 1){
              arr[i][j-1] = 0; 
              arr[i+1][j] = 0; 
              arr[i][j+1] = 0; 
          }else if(i == 2 && j == 2){
              arr[i][j-1] = 0; 
              arr[i+1][j] = 0; 
        }
        }else{
            arr[i][j] = 1; 
        }
    }
}

for(int i = 0; i < 3; i++){
    cout << "\n"; 
    for(int j = 0; j < 3; j++){
        cout << arr[i][j]; 
    }
}


   return  0; 
   
}