#include <iostream>
#include <cstdlib>
using namespace std;

void block(int rows, int columns);

int main(){

  int r, c;
  do{
    cout << "Enter number of rows and columns:" << endl;
    cin >> r;
    cin >> c;

    block(r, c);

  } while(r != 0 || c != 0);

  return 0;
}

void block(int rows, int columns){
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      cout << "X.";
    }
    cout << endl;
  }
}
