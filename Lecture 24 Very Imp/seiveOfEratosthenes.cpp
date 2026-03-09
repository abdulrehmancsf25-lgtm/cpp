#include<iostream>
#include<cmath>
#include<vector>
using namespace std ;
void prime(  int l , int r){
  //  STEP1 --> FIND PRIME NUMBERS LESS THAN SQRT OF r
       vector<int> primeValues ;
        int o = sqrt(r) ;
       vector<bool> isPrime(o + 1 , true) ;
         isPrime[0] = isPrime[1] = false ;
         for(int i = 2 ; i <= o  ; i++){
             if(isPrime[i] ){
                  primeValues.push_back(i) ;
                  for(int j = i*2 ; j<= o ; j += i ){
                    isPrime[j] = false ;
                  }
                }
         }
 //     STEP 2 -->     TO MARK THE MULTIPLES OF PRIME NO.S' AS FALSE IN RANGE L TO R     
         vector<bool> countPrimes(r - l + 1 , true) ;
// Edge cases
             if(l == 0)
             countPrimes[0] = countPrimes[1] = false ;
              if (l == 1)
             countPrimes[0] = false ;
   //   STEP 3--> MARKING MULTIPLES OF PRIME NUMBERS AS FALSE       
         for (auto k : primeValues ){
                    long long  firstMultiple =max(k * k ,(l / k) * k );
                    if (firstMultiple < l )
                        firstMultiple  +=  k ;
                for (long long  j = firstMultiple ;  j <= r ; j += k ){
                  countPrimes[j - l] = false ;
                }
         }
//   STEP 4 -->     TO PRINT THE PRIME NUMBERS ;
           for (int i = l ; i <= r ; i++){
               if(  countPrimes[i- l] == true ){
                    cout << i << " " ;
               }
              }
}

int main(){  
  long long  left ,right ;
  cout << "Enter the start of range  " ;
   cin >> left ;
   cout  << "Enter the end of range    " ;
   cin >> right ;
          prime(left, right) ;
    return 0 ;
}