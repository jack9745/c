#include <iostream>
using namespace std;

// ����һ�������¶ȣ������Ӧ�Ļ����¶�;

void temperatureTransform()
{
  // �����¶�תΪ�����¶ȵļ��㹫ʽ  f=c*5/9+32;
  float c;
  cout << "�����������¶� \n";
  cin >> c;
  float f = c * 5 / 9 + 32;
  cout << "�����¶�Ϊ��" << f << endl;
}
int main(int argc, char const *argv[])
{
  /* code */
  temperatureTransform();
  return 0;
}