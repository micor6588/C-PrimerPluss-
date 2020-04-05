// 3.7.cpp: 定义控制台应用程序的入口点。
// 3.7.cpp: 单位换算及数值计算
#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter your kilometers:";
  float kilometer;
  cin >> kilometer;
  cout << "Enetr your litros:";
  float litro;
  cin >> litro;
  float eux;
  eux = litro / (kilometer / 100);
  cout << "Every 100 kilometers cost " << eux << " litros gas in Europe." << endl;
  const float Mile_per_100kilometers = 62.14;
  float mile;
  mile = (kilometer / 100) * Mile_per_100kilometers;
  const float Calon_per_litro = 3.875;
  float calon;
  calon = litro / Calon_per_litro;
  float usx;
  usx = mile / calon;
  cout << "That means you drive " << usx << " miles  using 1 calon gas in the US." << endl;
  cout << eux << "/100km = " << usx << "mpg" << endl;
  return 0;
}