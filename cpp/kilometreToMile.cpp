#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */

  // 输入公里数，输出对应的英里数; 公式为 1公里 =0.62137 英里

  float kilometre;
  float mile;

  cout << "请输入公里：\n";
  cin >> kilometre;
  mile = 0.62137 * kilometre;
  cout << "对应的公里数为：" << mile << endl;
  return 0;
}
