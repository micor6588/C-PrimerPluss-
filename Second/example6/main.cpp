#include <iostream>
using namespace std;
double LightYearTran(double);
int main()
{
  cout << "Please enter the number of light years:" << endl;
  double LightYears;
  cin >> LightYears;
  double Distance;
  Distance = LightYearTran(LightYears);
  cout << LightYears << " light years = " << Distance << " astronmical units" << endl;
  return 0;
}

double LightYearTran(double years)
{
  return years * 63240;
}