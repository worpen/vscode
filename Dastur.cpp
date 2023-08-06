#include <iostream>
#include <string>

using namespace std;

int main() {

  string name;
  cout << "Ismingiz nima? ";
  getline(cin, name);

  cout << "Salom " << name << endl;

  int number;
  cout << "Istalgan son kiriting: ";
  cin >> number;

  int square = number * number;
  int cube = number * number * number;

  cout << number << " ning kvadrati " << square << endl;
  cout << number << " ning kubi " << cube << endl;

  return 0;
}