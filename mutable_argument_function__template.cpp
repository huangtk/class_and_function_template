#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T, class...Args> void foo(const T& t, const Args&...rest)
{
    cout << "typeid(t)" << " " << typeid(t).name() << endl;
    cout << "sizeof...(rest)" << sizeof...(rest) << endl;
    cout << "sizeof...(Args)" << sizeof...(Args) << endl;
    cout << endl;
}



int main()
{
    int i = 1; double d = 2.0; string s = "hello world!";
    foo(i, d, s, 42);
    foo(s, d, 42);
    foo(42 ,i, s);
    foo(i);

    return 0;
}
