#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   return fibonacci(N-1)+fibonacci(N-2);

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N ;
  cout<<fibonacci(7)<<endl;
  return 0;

}