// starT.cpp
//A demonstration of ASCII Art printing T characters
//Melissa Canas
//04.24.19

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starT(int width, int height);

string starT(int width, int height){

  string result="";

  //check if parameters are valid
  if ((width<3) || (height < 2)){
    return result; //return without printing anything
  } else if (width % 2 != 1){
    return result; //return without printing anything
  }

  //print first line of width stars
  for (int col = 1; col <= width; col++){
    result += "*";
  }

  result += "\n";

  //add width/2 spaces, a star, and width/2 + 1 spaces followed by
  // a \n for the remaining height-1 rows
  for (int row = 1; row <= height-1; row++){
    for (int col = 1; col <= width/2; col++){
      result += " ";
    }
    result += "*";
    for (int col = 1; col <= width/2; col++){
      result += " ";
    }
    result += "\n";
  }

  return result;
}

// Test-Driven Development; check expected results against actual results
void runTests(void){

  string starT34Expected =
    "***\n"
    " * \n"
    " * \n"
    " * \n" ;

  assertEquals(starT34Expected,starT(3,4),"starT(3,4)");

  string starT53Expected =
    "*****\n"
    "  *  \n"
    "  *  \n" ;

  assertEquals(starT53Expected,starT(5,3),"starT(5,3)");

  string starT72Expected =
    "*******\n"
    "   *   \n";

  assertEquals(starT72Expected,starT(7,2),"starT(7,2)");

  assertEquals("",starT(1,2),"starT(1,2)");
  assertEquals("",starT(5,1),"starT(5,1)");
  assertEquals("",starT(4,2),"starT(4,2)");
  assertEquals("",starT(6,2),"starT(6,2)");
}

// Test harness
void assertEquals(string expected, string actual, string message=""){
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}

// Main function
int main(int argc, char *argv[])
{

    if (argc!=3) {
      cerr << "Usage: " << argv[0] << " width height" << endl;
      exit(1);
    }

    int width = stoi(argv[1]);
    int height = stoi(argv[2]);

    // If the program is executed with parameters -1 -1 unit test
    // the starL() function using our automated test framework
    if (width==-1 && height==-1){
      runTests();
      exit(0);
    }

    cout << starT(width,height);
    return 0;

}
