#include <iostream>
using namespace std;
int main()
{
  char name1[20];
  char name2[20];
  cout << "what is your first name?\n";
  cin.get(name1, 20).get();
  cout << "what is your last name?\n";
  cin.get(name2, 20).get();
  char worde[20];
  cout << "what letter grade do you deserve?\n";
  cin.get(worde, 20).get();
  cout << "what is your age?\n";
  char Age[20];
  cin.get(Age, 20).get();
  cout << "Name:" << name2 << "," << name1 << endl;
  cout << "Age:" << Age << endl;
}