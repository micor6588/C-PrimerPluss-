#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name;
  string last_name;
  string combine;
  cout << "Enter your first name: ";
  getline(cin, first_name);
  cout << "Enter your last name: ";
  getline(cin, last_name);
  combine = last_name + ", " + first_name;
  cout << "Here's the information in a single string: " << combine << endl;

  system("pause");
  return 0;
}