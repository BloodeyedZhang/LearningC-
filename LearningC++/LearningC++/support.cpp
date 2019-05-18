//
//  support.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/5/18.
//  Copyright © 2019年 张佳俊. All rights reserved.
//

#include <iostream>

extern int count;

void write_extern(void) {
    std::cout << "Count is " << count << std::endl;
}
