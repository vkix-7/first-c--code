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
/*n=5;
1        1
12      21
123    321
1234  4321
1234554321
*/
void pattern2(int n){
  int space = 2*(n-1);
for(int i =1 ; i<=n;i++){
  //numbers
  for(int j=1;j<=i;j++){
    cout << j ;
  }
  //space
  for(int j=1;j<=space;j++){
    cout << " ";
  }
  //numbers
  for(int j=i;j>=1;j--){
    cout << j ;
  }
  cout<< endl;
  space-=2;

}
}
/* n=5
1
0 1 
1 0 1
0 1 0 1
1 0 1 0 1*/
void pattern3(int n){
  for(int i=0;i<n;i++){
int start=1;
    if(i%2==0) start=1;
    else start=0;
    for(int j=0;j<=i;j++){
      cout << start<<" ";
      start=1-start;
    }
    cout<<endl;
  }
}
void pattern4(int n){int num=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout << num <<" ";
      num+=1;
    }cout << endl;
  }
}
void pattern5(int n){
    // Write your code here.
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(n-i-1);j++){
            cout << j<<" ";
        }
        cout<< endl;
    }
}
void  pattern6(int n)
   {
    // Write your code here.
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
       
    }
}
void pattern7(int n){
  for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            
        }
        cout << endl;
      
    }
}
void pattern8(int n){ 
 
   for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
         char ch = 'A';
  int breakp =(2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            cout << ch ;
            if(j<=breakp) ch++;
            else ch--;
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
   for(int i=0;i<n;i++){
       char ch ='A'+n-1;
        for(int j=1;j<=i+1;j++){
            
cout << ch << " ";
ch--;
        }
        cout << endl;
    }
}
void pattern10(int n){
for(int i=0;i<n;i++){
  //stars
  for(int j=1;j<=n-i;j++){
    cout << "*";
  }
  //spaces
  for(int j=1;j<=2*i;j++){
    cout << " ";
  }

  //stars
    for(int j=1;j<=n-i;j++){
    cout << "*";
  }
  cout << endl;
}
int ch =2*n-2;
for(int i=1;i<=n;i++){
  //stars
  for(int j=1;j<=i;j++){
    cout << "*";
  }
  //spaces
  for(int j=1;j<=ch;j++){
    cout << " ";
  }

  //stars
    for(int j=1;j<=i;j++){
    cout << "*";
  }
  cout << endl;
  ch-=2;
}
}

int main(){
    int n;
    cin >> n ;
    nStarDiamond(n);cout<< endl;
    pattern2(n);cout<< endl;
    pattern3(n);cout<< endl;
pattern4(n);cout<< endl;
pattern5(n);
cout<< endl;
pattern6(n);cout<< endl;
pattern7(n);cout<< endl;
pattern8(n); cout<<endl;
pattern9(n);cout <<"\n" ;
pattern10(n);
}