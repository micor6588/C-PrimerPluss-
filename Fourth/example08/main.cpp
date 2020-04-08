#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
  string name;
  double diameter;
  double weight;
};

int main()
{
  Pizza *pizza = new Pizza;
  cout << "Please enter the diameter of this pizza: ";
  cin >> pizza->diameter;
  cin.get(); //去除换行符
  cout << "Please enter the name of this pizza: ";
  getline(cin, pizza->name);
  cout << "Please enter the weight of this pizza: ";
  cin >> pizza->weight;

  cout << "The name of this pizza is " << pizza->name << endl;
  cout << "The diameter of this pizza is " << pizza->diameter << endl;
  cout << "The weight of this pizza is " << pizza->weight << endl;

  delete pizza;

  system("pause");
  return 0;
}