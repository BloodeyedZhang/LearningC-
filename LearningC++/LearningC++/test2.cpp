//
//  test2.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/5/18.
//  Copyright © 2019年 张佳俊. All rights reserved.
//

#include <iostream>
using namespace std;

class Adder {
public:
    // 构造函数
    Adder(int i = 0) {
        total = i;
    }
    // 对外的接口
    void addNum(int number) {
        total += number;
    }
    // 对外的接口
    int getTotal() {
        return total;
    }
    ;
private:
    // 对外隐藏的数据
    int total;
};

int test2() {
    Adder a;
    
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    
    cout << "Total " << a.getTotal() << endl;
    return 0;
}
