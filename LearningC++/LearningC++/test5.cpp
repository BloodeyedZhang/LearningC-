//
//  test5.cpp
//  LearningC++
//
//  Created by 张佳俊 on 2019/5/20.
//  Copyright © 2019年 张佳俊. All rights reserved.
//
//  命令模式
//

#include <stdio.h>

// 可触发的游戏命令
class Command {
public:
    virtual ~Command() {};
    virtual void execute(GameActor& actor) = 0;
};

class JumpCommand : Command {
public:
    virtual void execute(GameActor& actor) {
        actor.jump();
    }
};

class FireCommand : Command {
public:
    virtual void execute(GameActor& actor) {
        actor.fireGun();
    }
};

class LurCommand : Command {
public:
    virtual void execute(GameActor& actor) {
        actor.lurchIneffectively();
    }
}

class SwapWeaponCommand : Command {
public:
    virtual void execute(GameActor& actor) {
        actir.swapWeapon();
    }
}

class InputHandler {
public:
    Command* handleInput();
    
private:
    Command* buttonX_;
    Command* buttonY_;
    Command* buttonA_;
    Command* buttonB_;
    
};

Command* InputHandler::handleInput() {
    if (isPressed(BUTTON_X)) return buttonX_;
    else if (isPressed(BUTTON_Y)) return buttonY_;
    else if (isPressed(BUTTON_A)) return buttonA_;
    else if (isPressed(BUTTON_B)) return buttonB_;
    
    // Nothing pressed, so do nothing
    return null;
}

class MoveUnitCommand : public Command {
public:
    MoveUnitCommand(Unit* unit, int x, int y) : unit_(unit) {
        x_(x);
        y_(y);
    }
    
    virtual void execute() {
        unit_->moveTo(x_, y_);
    }
    
private:
    Unit* unit;
    int x_;
    int y_;
}
