#include <iostream>
#include <string>

using namespace std;

int main() {
  string surname,name;

  cout << "姓を入力：";
  cin >> surname;
  cout << "名を入力：";
  cin >> name;
  cout << "名前は、" << surname + name << "です。" << endl;
  return 0;
}
