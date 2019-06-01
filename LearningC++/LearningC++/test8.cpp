//
//  test8.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/6/1.
//  Copyright © 2019 张佳俊. All rights reserved.
//
//
//  原型模式

#include <stdio.h>

class Monster {
public:
    virtual ~Monster() {};
    virtual Monster* clone() = 0;
    
    // other stuff...
};

class Ghost : public Monster {
public:
    Ghost(int health, int speed)
    : health_(health), speed_(speed) {}
    
    virtual Monster* clone() {
        return new Ghost(health_, speed_);
    }
    
private:
    int health_;
    int speed_;
};
class Demon : public Monster {};
class Sorcerer : public Monster{};

class Spawner {
public:
    Spawner(Monster* prototype) : prototype_(prototype) {}
    
    Monster* spawnMonster() {
        return prototype_->clone();
    }
    
private:
    Monster* prototype_;
};
