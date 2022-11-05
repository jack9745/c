#include <stdio.h>

// 要想使用bool关键字，那么就要先加载头文件

#include <stdbool.h>
bool flag = true;
int main()
{
  printf("hello,world \n");
  // 可以用整数类型打印出来， 1表示 true ，0表示false
  printf("我是布尔值 %d \n", flag);
  // 怎么打印布尔类型的值
}