#include <iostream>
using namespace std;
int main()
{
  const int Latitude_Tran = 60;
  cout << "Enter a latitude in degrees ,minutes,and seconds:" << endl;
  float degrees, minutes, seconds;
  cout << "degress:" << endl;
  cin >> degrees;
  cout << "minutes:" << endl;
  cin >> minutes;
  cout << "seconds:" << endl;
  cin >> seconds;

  cout << "First,enter the degrees:" << degrees << endl;
  cout << "First,enter the minutes:" << minutes << endl;
  cout << "First,enter the seconds:" << seconds << endl;
  cout << degrees << "degrees" << minutes << "minutes" << seconds << "seconds=" << float(degrees + float(minutes / Latitude_Tran) + float(seconds / Latitude_Tran / Latitude_Tran)) << endl;
  return 0;
}