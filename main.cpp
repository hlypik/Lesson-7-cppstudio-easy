#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
  //Getting data from the user
  double pointX = 0;
  cout << "Inter X: "; cin >> pointX;
  double pointY = 0;
  cout << "Inter Y: "; cin >> pointY;
  double pointZ = 0;
  cout << "Inter Z: "; cin >> pointZ;
  cout << "You inter this number: X = " << pointX << "; Y = " << pointY <<
      "; Z = " << pointZ << endl;

  //Calculating the length of a vector
  double vectorLength = 0;
  vectorLength = sqrt((pow(pointX, 2)) + (pow(pointY, 2)) + (pow(pointZ, 2)));
  cout << "Vector length = " << vectorLength << endl;
}