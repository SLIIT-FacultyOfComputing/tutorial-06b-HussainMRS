#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
  //creating an object
  Box box1;
  
  //Assigning values to 3 diemensions
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> height;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
  
   //using settters to assign values
  box1.setLength(length) ;
  box1.setWidth(width) ;
  box1.setHeight(height) ;
  
   //printing the results out
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
  
      return 0;
}

