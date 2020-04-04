#include <iostream>
using namespace std;
void MyFunction01();
void MyFunction02();
int main()
{
  MyFunction01();
  MyFunction01();
  MyFunction02();
  MyFunction02();
  return 0;
}
void MyFunction01()
{
  cout << "Three blind mice" << endl;
}
void MyFunction02()
{
  cout << "See how they run" << endl;
}