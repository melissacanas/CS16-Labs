#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include <cmath>
#include "utility.h"

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q){
  double b=sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2));
  return b;
}

void initPoint(struct Point *p, double xVal, double yVal){
  (*p).x = xVal;
  (*p).y = yVal;
  return;
}


string pointToString(Point p, int precision){
  ostringstream oss;
  oss << setprecision(precision);
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision){
  ostringstream oss;
  oss << setprecision(precision);
  oss << "ul=(" << (b.ul).x << "," << (b.ul).y << ")" << ",w=" << b.width << ",h=" << b.height;
  return oss.str();
}



bool pointsApproxEqual(Point p1, Point p2, double tolerance){
  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance){
  if((fabs((b1.ul).x-(b2.ul).x) < tolerance)&&(fabs((b1.ul).y-(b2.ul).y) < tolerance)){
    if(fabs((b1.width)-(b2.width)) < tolerance){
      if(fabs((b1.height)-(b2.height)) < tolerance){
	return true;
      }
    }
  }
  return false;
}

void initBox(struct Box *b, double ulx, double uly, double w, double h){
  ((*b).ul).x = ulx;
  ((*b).ul).y = uly;
  (*b).width  = w;
  (*b).height = h;
  return;
}


double areaOfBox(Box b){
  double c=(b.width)*(b.height);
  return c;
}
