#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int x;
  cout << "Enter an integer greater than 1: ";
  cin >> x;

  cout << "Factors of " << x << " are : ";

  for (int i = 1; i <= x; i++){
    if(x%i == 0){
      cout << i << ", ";
    }
  }
  cout << x << endl;
  return 0;
}
