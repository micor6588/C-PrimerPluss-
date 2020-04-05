#include <iostream>
using namespace std;

int main()
{
  float Miles, Gallon;
  cout << "请输入您的驱车里程：" << endl;
  cin >> Miles;
  cout << "您的驱车里程为:" << Miles << "英里" << endl;
  cout << "请输入您的驱车油耗：" << endl;
  cin >> Gallon;
  cout << "您的驱车油耗为:" << Gallon << "加仑" << endl;
  cout << "您的百公里油耗为:" << 100 * Gallon / Miles << endl;
  return 0;
}