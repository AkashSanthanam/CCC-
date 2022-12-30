#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


long long int a, b; 
cin >> a >> b; 
int digits = 0; 
long long int n = a; 
char ch; 
do{
    digits++;
    n /= 10; 
}while(ch = getchar() != '\n'); 
int arr[digits][digits]; 
int output[digits]; 

for(int i = 0; i < digits; i++){
    int lastA = a % 10; 
    int lastB = b % 10; 

    arr[0][i] = lastA; 
    arr[1][i] = lastB; 

    a /= 10; 
    b /= 10; 
}

reverse(arr[0], arr[0] + digits); 
reverse(arr[1], arr[1] + digits); 

for(int i = 0 ; i < digits; i++){
    if((arr[0][i] == 1 && arr[1][i] == 0) || (arr[0][i] == 0 && arr[1][i] == 1)){
        output[i] = 1;  
    }else{
        output[i] = 0; 
    }
}

for(int i = 0; i < digits; i++){
    cout << output[i]; 
}

   return  0; 
   
}