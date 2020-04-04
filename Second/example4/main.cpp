#include <iostream>
using namespace std;
int CountMonth(int);
int main()
{
  cout << "请输入您的年龄:";
  int age;
  cin >> age;
  int AgeMonth;
  AgeMonth = CountMonth(age);
  cout << "您的年龄包含：" << AgeMonth << "个月。" << endl;
  return 0;
}

int CountMonth(int age)
{
  return age * 12;
}