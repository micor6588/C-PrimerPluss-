#include <iostream>
using namespace std;
int main()
{
  const int Time_Tran = 60;
  cout << "Enter the number of seconds:" << endl;
  long seconds;
  int days, hours, minutes, seconds1;
  cout << "seconds:" << endl;
  cin >> seconds;
  days = seconds / (Time_Tran * Time_Tran * 24);
  hours = (seconds - days * 24 * Time_Tran * Time_Tran) / (Time_Tran * Time_Tran);
  minutes = (seconds - days * 24 * Time_Tran * Time_Tran - hours * Time_Tran * Time_Tran) / Time_Tran;
  seconds1 = seconds - days * 24 * Time_Tran * Time_Tran - hours * Time_Tran * Time_Tran - minutes * Time_Tran;
  cout << seconds << "seconds=" << days << "days" << hours << "hours" << minutes << "minutes" << seconds1 << "seconds" << endl;
  return 0;
}