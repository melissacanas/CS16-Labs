// myProg02.cpp
// Author: Melissa Canas

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){

  if (argc!=2) {
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1);
  }

  string filename = argv[1];

  ifstream ifs;
  ifs.open(filename);

  if (!ifs){
    return 0;
  }

  string line;
  int countDuck = 0;
  int countNotDuck = 0;
  int countAnimals = 0;

  while (getline(ifs, line)){
    int pos = line.find("duck");
    if (pos >= 0){
      countDuck ++;
    }
    else if (pos < 0){
      countNotDuck ++;
    }
  countAnimals = countDuck + countNotDuck;
  }

  cout << "Report for " << filename << ":" << endl;
  cout << "   Animal count:    " << countAnimals << endl;
  cout << "   Duck count:      " << countDuck << endl;
  cout << "   Non duck count:  " << countNotDuck << endl;

  ifs.close();

  return 0;
}
