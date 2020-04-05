#include <iostream>
using namespace std;
int main()
{
  int yinchi, yincun;
  float pang;
  cout << "请输入您的身高:";
  cin >> yinchi;
  cout << "英尺";
  cin >> yincun;
  cout << "英寸";
  cout << "您的身高为:" << yinchi << "英尺" << yincun << "英寸" << endl;
  const int Height_element = 12;
  const float Height_Tran = 0.0254;
  const float Pang_Tran = 2.2;

  int height;
  float height_Mi;
  height = yinchi * Height_element + yincun;
  height_Mi = height * Height_Tran;
  cout << "请输入您的体重:";
  cin >> pang;
  cout << "您的体重为:" << pang / Pang_Tran << "Kg";
  float Weight;
  Weight = pang / Pang_Tran;
  float BMI;
  BMI = Weight / (height_Mi * height_Mi);
  cout << "体重的健康指数为:" << BMI << endl;
}