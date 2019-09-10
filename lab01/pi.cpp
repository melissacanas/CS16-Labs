#include <iostream>
#include <cmath>
using namespace std;

double pi(int n);

int main(){

  int x;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  do{
    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
    cin >> x;

    if (x + 1 == 1){
      cout << "The approximate value of pi using " << x + 1 << " term is: " << pi(x) << endl;
    }

    else if (x + 1 > 1){
      cout << "The approximate value of pi using " << x + 1 << " terms is: " << pi(x) << endl;
    }
  } while (x > -1);

  return 0;
}

double pi(int n){

  double pi = 1;

  pi = 1;

  for(int i = 1; i <= n ; i++){
    pi += 4 * (pow(-1, i))/((2*i)+1);
  }

  pi += 3;

  return pi;
}
