#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  double pi = 1;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  cout<< "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
  cin >> n;

  while(n > -1){
    pi = 1;
    for(int i = 1; i <= n ; i++){
      pi += 4 * (pow(-1.0,i))/((2*i)+1);
    }

    pi += 3;

    if (n + 1 == 1){
      cout << "The approximate value of pi using " << n + 1 << " term is: " << pi << endl;
    }

    else if (n + 1 > 1){
      cout << "The approximate value of pi using " << n + 1 << " terms is: " << pi << endl;
    }

    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" <<endl;
    cin >> n;

  }
}
