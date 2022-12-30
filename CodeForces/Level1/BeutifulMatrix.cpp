#include <bits/stdc++.h>
#define pb push_back
#define pf pop_fron


using namespace std; 


int main(){

int arr[5][5]; 
int row; 
int colunm; 

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cin >> arr[i][j]; 
        if(arr[i][j] == 1){
            row = i; 
            colunm = j; 
        }
    }
}

int sum1 = abs(row - 2); 
int sum2 = abs(colunm - 2); 


int ways = sum1 + sum2; 

cout << ways << endl; 






    return 0; 
}