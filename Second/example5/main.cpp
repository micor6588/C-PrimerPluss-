#include <iostream>
using namespace std;
double TemperatureTran(double);
int main()
{
  cout << "Please enter a Celsius value:" << endl;
  double tempreture;
  cin >> tempreture;
  double HuaShi;
  HuaShi = TemperatureTran(tempreture);
  cout << tempreture << " degrees Celsius is " << HuaShi << " degrees Fahrenheit" << endl;
  return 0;
}

double TemperatureTran(double temperature)
{
  return temperature * (9 / 5) + 32;
}