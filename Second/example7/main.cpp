#include <iostream>
using namespace std;
void TimeShow(int, int);
int main()
{

  int hour;
  cout << "Please enter the number of hours:" << endl;
  cin >> hour;
  int minutes;
  cout << "Please enter the number of minutes:" << endl;
  cin >> minutes;
  TimeShow(hour, minutes);
  return 0;
}

void TimeShow(int hour, int minutes)
{
  cout << "Time:" << hour << ":" << minutes << endl;
}