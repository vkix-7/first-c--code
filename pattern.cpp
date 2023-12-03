#include<bits/stdc++.h>
using namespace std;
void nStarDiamond(int n) {
    /* *       //for input = 8 print 
      ***      
     *****     
    *******    
   *********   
  ***********  
 ************* 
***************
***************
 ************* 
  ***********  
   *********   
    *******    
     *****     
      ***      
       *      */

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*" ;
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
         for(int i=0; i<=n; i++){
          for (int j = 1; j<=i; j++) {
            cout << " " ;
          }
          for (int j = 1; j<=2*n-(2*i+1); j++) {
            cout << "*" ;
          }
          for (int j = 1; j<=i; j++) {
            cout << " ";
          }

          cout << endl;
    }
}
void pattern2(int n){
  int space = 2*(n-1);
for(int i =1; i<n;i++){
  //numbers
  for(int j=1;j<=i;j++){
    cout << j;
  }
  //space
  for(int j=1;j<=space;j++){
    cout << " ";
  }
  //numbers
  for(int j=i;j>=1;j--){
    cout << j;
  }
  cout<< endl;
  space-=2;

}
}
int main(){
    int n;
    cin >> n ;
    nStarDiamond(n);
    pattern2(n);
}