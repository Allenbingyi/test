//
//  main.cpp
//  10.19_02继承中的构造和析构顺序
//
//  Created by 陈炳屹 on 2019/10/19.
//  Copyright © 2019 陈炳屹. All rights reserved.
//


//继承中的构造和析构的顺序
#include <iostream>
using namespace  std;
class Base
{
public:
    Base()
    {
        cout << "Base 的构造函数！" << endl;
    }
    ~Base()
    {
        cout << "Base 的析构函数！" << endl;
    }
};
class Son :public Base
{
public:
    Son()
    {
        cout << "Son的构造函数" << endl;
    }
    ~Son()
    {
        cout << "Son的析构函数" << endl;
    }
};
void test01()
{
    //Base b;
    
    //继承中的构造和析构的顺序如下：
    //先构造父类，再构造子类，析构的顺序正好相反。
    
    Son s;
}
int main()
{
    test01();
    return 0;
}
