#include <iostream>
#include <typeinfo>
using namespace std;

//不可变参数函数模版
template<typename T> ostream& print(ostream& os, const T& t)
{
    return os << t;
}

//可变参数函数模版
template<typename T, typename...Args> ostream& print(ostream& os, const T& t, const Args&...rest)
{
    os << t << ", ";    //打印出第一个实参
    return print(os, rest...);  //递归调用， 打印其他实参
}



int main()
{
    print(cerr, 1, 2, 3, 3, 4, 45, 6, 7, 8, 89);
    return 0;
}
