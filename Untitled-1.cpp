#include <iostream>

#include <cstdlib>

using namespace std;

int main() {

    int A[50], B[50];

int i,n,j,m;



cout << "1. Size A=";

cin >> n;

cout << "A: ";

for(i = 0; i < n; i++){

    cin >> A[i];

   // Ввели з консолі

  }

j=0;

for (i=0; i<n; i++){

    if (A[i] > 10){

    B[j++] = A[i];

    }

}

 m=j;   

 cout << "B: ";

for(i = 0; i < m; i++)

  {

    cout << B[i] ;

    // Масив В

  }    

   cout << "\n";

  

  

  cout << "2. Size A=";

  cin >> n;

  cout << "А: ";

  for (int i = 0; i < n; i++){

     A[i] = rand() % 41 - 20;

     // рандом -20 до 20

  cout << A[i] << endl;

 }

 j=0;

for (i=0; i<n; i++){

    if (A[i] > 10){

    B[j++] = A[i];

    }

}

 m=j;   

 cout << "B: ";

for(i = 0; i < m; i++)

  {

    cout << B[i] ;

    // Масив В

  }    

   cout << "\n";

    return 0;

}