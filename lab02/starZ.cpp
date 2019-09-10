// starZ.cpp
//A demonstration of ASCII Art printing C characters
//Melissa Canas
//04.24.19

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starZ(int width);
string zDiagonalRow(int row, int width);
void runTests(void);

string starZ(int width){
  string result="";

  //check if parameters are valid
  if (width < 3){
    return result; //return without printing anything
  }

  //print first line of width stars
  for (int col = 1; col <= width; col++){
    result += "*";
  }

  result += "\n";


  //print slash using zDiagonalRow
  for (int row = 1; row < (width - 1); row++){
    result += zDiagonalRow(row, width);
  }

  //print last line of width stars
  for (int col = 1; col <= width; col++){
    result += "*";
  }

  result += "\n";

  return result;
}

//places asterisk at appropriate location according to row #
string zDiagonalRow(int row, int width){
  string result = "";

  //increment in reverse
  for (int col = (width - 1); col > 0; col--){

    //only print asterisk when at col corresponding to row
    if(col == row){
      result += '*';
    }
    //fill in the blanks before and after
    //always add, because spaces are filled with ' '
    result += ' ';
  }

  return result += "\n";
}

//test-Driven Development; check expected results against actual results
void runTests(void){

  string starZ3Expected =
    "***\n"
    " * \n"
    "***\n";

  assertEquals(starZ3Expected,starZ(3),"starZ(3)");

  string starZ4Expected =
    "****\n"
    "  * \n"
    " *  \n"
    "****\n";

  assertEquals(starZ4Expected,starZ(4),"starZ(4)");

  assertEquals("",starZ(0),"starZ(0)");
  assertEquals("",starZ(2),"starZ(2)");
}

//test harness
void assertEquals(string expected, string actual, string message=""){
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}

//main function
int main(int argc, char *argv[])
{

  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " width" << endl;
    exit(1);
  }

  int width = stoi(argv[1]);

  //if the program is executed with parameter -1 unit test
  //the starL() function using our automated test framework
  if (width==-1) {
    runTests();
    exit(0);
  }

  cout << starZ(width);
  return 0;
}
