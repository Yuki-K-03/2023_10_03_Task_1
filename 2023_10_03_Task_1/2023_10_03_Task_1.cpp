#include <iostream>

using namespace std;

int Sum(int num1, int num2);

int main()
{
    int num1 = 0, num2 = 0;

    printf("値1を入力 > ");
    cin >> num1;
    printf("値2を入力 > ");
    cin >> num2;

    printf("合計値は%dです。\n", Sum(num1, num2));
}