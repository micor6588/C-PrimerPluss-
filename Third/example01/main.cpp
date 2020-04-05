//身高的单位换算
#include <iostream>
using namespace std;
int main()
{
  const int Height_Tran = 2.54;
  cout << "请输入您的身高:__________\b\b\b\b\b\b\b\b\b" << endl;
  int inchi;
  cin >> inchi;
  cout << "换算后，您的身高为:" << inchi * Height_Tran << "厘米" << endl;
  return 0;
}