#include <bits/stdc++.h>
#define pb push_back
#define pf pop_fron

using namespace std;

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}


int main(){

ios::sync_with_stdio(0);cin.tie(0); cout.tie(0); 

vector<int> primes; 


int tests; 
bool isPrime;
cin >> tests; 

int comb[tests][2]; 
int arr[tests]; 
for(int i = 0 ; i < tests; i++){
     cin >> arr[i]; 
}
std::cout.flush(); 
for(int i = 0; i < tests; i++){
    for(int n = 2; n < arr[i]; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == false){
          continue; 
      }else{
        for(int j = n; j <= n; j++){
            if(j + n == 2*arr[tests]){
            cout << j << endl;
            cout << n << endl; 
                comb[i][0] = j; 
                comb[i][1] = n; 
                break; 
            }
        }
      }

   }

   
}


    return 0; 
}