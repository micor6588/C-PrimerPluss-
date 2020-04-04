#include <iostream>
using namespace std;
//距离换算
int DistanceTran(int);
int main()
{
  cout << "请输入您需要转换的距离:";
  int distance;
  int longDistance;
  cin >> distance;
  longDistance = DistanceTran(distance);
  cout << "转换后的距离为:" << longDistance << endl;
  return 0;
}
int DistanceTran(int distance)
{
  return distance * 220;
}
