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
extern int test();
extern int test1();
extern int test2();
extern int test3();
extern int test4();


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, C++ World!\n";
//    count =5;
//    write_extern();
    
    //test
    //test();
    //test1();
//    test2();
//    test3();
    test4();
    return 0;
}

