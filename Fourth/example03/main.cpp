#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char first_name[20];
  char last_name[20];
  char combine[40];
  cout << "Enter your first name: ";
  cin.getline(first_name, 20);
  cout << "Enter your last name: ";
  cin.getline(last_name, 20);
  strcpy(combine, last_name);
  strcat(combine, ", ");
  strcat(combine, first_name);
  cout << "Here's the information in a single string: " << combine << endl;

  system("pause");
  return 0;
}