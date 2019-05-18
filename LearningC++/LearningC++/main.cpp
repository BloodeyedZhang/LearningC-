//
//  main.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/5/18.
//  Copyright © 2019年 张佳俊. All rights reserved.
//

#include <iostream>

int count;
extern void write_extern();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    count =5;
    write_extern();
    return 0;
}
