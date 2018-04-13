#include <iostream>
#include "class.hpp"

using namespace std;

int main()
{
  CSample obj;
  int num;

  cout << "整数を入力してください：";
  cin >> num;

  obj.set(num);
  cout << obj.get() << endl;

  return 0;
}
