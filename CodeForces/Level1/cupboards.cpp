#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


int n, a, b ,count1 = 0, count2 = 0, total = 0; 
bool flag = true; 
cin >> n; 
int arr1[n]; 
int arr2[n]; 

for(int i = 0; i < n; i++){
    cin >> a >> b; 
    arr1[i] = a;
    arr2[i] = b; 
}

sort(arr1, arr1 + n); 
sort(arr2, arr2 + n); 

for(int i = 1; i < n; i++){
    if(arr1[i] != arr1[i-1]){
        flag = false; 
        break; 
    }

    if(arr2[i] != arr2[i-1]){
        flag = false; 
        break; 
    }
}


for(int i = 0; i < n; i++){

    if(arr1[i] == 0){
        count1++; 
    }
    
    if(arr2[i] == 0){
        count2++; 
    }
}

if(count1 < n - count1){
    total += count1; 
}else{
    total += n - count1; 
}

if(count2 < n - count2){
    total += count2; 
}else{
    total += n - count2; 
}

if(flag){
    cout << 0 << endl; 
}else{
    cout << total << endl; 
}



   return  0; 
   
}