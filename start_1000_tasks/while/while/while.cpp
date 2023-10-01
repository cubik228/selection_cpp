#include <iostream>
int while1(int a, int b) {
    while (a > b)
    {
        a -= b;
    }
    return a;
}
template <class T, class BinaryOperation >
T while2(T start, T end, T result, BinaryOperation func) {
    int count = 0;
    while (start > end)
    {
        result = func(start, end);
        start -= end;
        count++;
    }
    std::cout << count<<"\n";
    return result;
}
void w1(int start, int end)///1
{
    std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });///1
}
void w2(int start, int end)///2
{
    std::cout << while2(start, end, 0, [](int start, int end) {return 0 ; });///2
}
void w3(int start, int end)///2
{
    std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });///2
}
bool while_4(int n) {
    while (n % 3 == 0)
    {
        n /= 3;
        std::cout << "бим";
        break;
    }
   // std::cout << "бам бам";
    return false;
}
int main()
{
    setlocale(LC_ALL, "ru");
    //std::cout << w1(14,3);
   // w2(14, 3);
    while_4(5);
}