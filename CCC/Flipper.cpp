#include <bits/stdc++.h>

using namespace std;


int main(){

ios::sync_with_stdio(0);cin.tie(0); cout.tie(0); 


int arr[2][2] = {{1,2} , {3,4}}; 


while(getchar() != '\n'){
    char ch = getchar(); 

    if(ch == 'H'){
        swap(arr[0][0], arr[1][0]); 
        swap(arr[0][1], arr[1][1]); 

    }else if(ch =='V'){
        swap(arr[0][0], arr[0][1]); 
        swap(arr[1][0], arr[1][1]); 

    }
}    


cout << arr[0][0] << " " << arr[0][1] << endl; 
cout << arr[1][0] << " " << arr[1][1] << endl; 
 




    return 0;
}