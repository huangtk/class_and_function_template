# class_and_function_template
一 ： 编写可变参数函数模版
函数模版和类模版（可变参数）可变数目的参数叫做： 参数包（模版参数包，函数参数包）
1. 可变参数通常是递归的。
  a) 第一步是调用处理包中的第一个实参，然后用剩余的实参调用自身。
  b) 为了终止递归， 我们还需要定义一个非可变参数的同名函数。
 
 Example:
 //不可变参数的函数模版
 template<class T> ostream& print(ostream& os, const T& t)
 { 
     return os << t;  //参数包中的最后一个元素之后，不打印分隔符
 }
 
 //可变参数的函数模版
 template<typename T, typename...Args> ostream& print(ostream& os, const T& t, const Args&...rest)
 {
     os << t << ", ";     //打印第一个实参
     return print(os, rest...);
 }
 

