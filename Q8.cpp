#include <iostream>
#include <cmath>
using namespace std;

int sumsquares_list(int a[5], int b)
 {
 int z=0;
 for(int i=0;i<5;i++)
 {
z = z+( pow (a[i], 2 ));
 }
 return z;
 }

 int main() {

   int x [5];

cout << "Please write a number: " ;
cin >> x[0];

cout << "Please write another: ";
cin >> x[1];

cout << "Please write another: ";
cin >> x[2];

cout << "Please write another: ";
cin >> x[3];

cout << "Please write another: ";
cin >> x[4];

cout << "The sum of the squares is: " << sumsquares_list (x,5);

 return 0;
 }
