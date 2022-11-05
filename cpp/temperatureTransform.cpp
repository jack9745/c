#include <iostream>
using namespace std;

// 输入一个摄氏温度，输出对应的华氏温度;

void temperatureTransform()
{
  // 摄氏温度转为华氏温度的计算公式  f=c*5/9+32;
  float c;
  cout << "请输入摄氏温度 \n";
  cin >> c;
  float f = c * 5 / 9 + 32;
  cout << "华氏温度为：" << f << endl;
}
int main(int argc, char const *argv[])
{
  /* code */
  temperatureTransform();
  return 0;
}