#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

int n; 
cin >> n; 
int arr[n]; 
int order[n]; 

for(int i = 0 ; i < n; i++){
    cin >> arr[i]; 
}

copy(arr, arr + n, order); 
sort(order, order + n); 

int min = order[0]; 
int max = order[n-1]; 
int count1 = 0; 
int count2 = 0; 
int temp; 

for(int i = 0; i < n; i++){
    if(arr[i] == max){
        temp = i; 
        count1 = i - 0; 
        break; 
    }
}

for(int i = n - 1; i >= 0; i--){
    if(arr[i] == min){
        if(temp > i){ 
            count2 = n - 2 - i; 
            break; 
        }
        count2 = n - 1 - i; 
        break; 
    }
}

int total = count1 + count2; 

cout << total << endl; 








   return  0; 
   
}