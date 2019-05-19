//
//  test4.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/5/18.
//  Copyright © 2019年 张佳俊. All rights reserved.
//

#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.n";
    
    // 清理并关闭
    // 终止程序
    exit(signum);
}

int test4() {
    int i = 0;
    // 注册新号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    
    while(++i) {
        cout << "Going to sleep..." << endl;
        if (i == 3) {
            raise(SIGINT);
        }
        sleep(1);
    }
    
    return 0;
}
