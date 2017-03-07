// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

//角色备忘录类
class RoleStateMemento
{
private:
    int vitality;
public:
    RoleStateMemento(){};
    RoleStateMemento(int vit)
    {
        this->vitality = vit;
    }
    int get_vitality()
    {
        return vitality;
    }
};

//游戏角色类
class GameRole
{
private:
    int vitality;
    string name;
public:
    GameRole(int Vit,string Name)
    {
        this->vitality = Vit;
        this->name = Name;
    }
    //保存进度，只保存了生命力（vitality）
    RoleStateMemento save_state()
    {
        RoleStateMemento memento(vitality);
        return memento;
    }
    //恢复进度
    void role_state_recover(RoleStateMemento memento)
    {
        this->vitality = memento.get_vitality();
    }
    //展示游戏角色状态
    void show()
    {
        cout<<"游戏角色名称： "<<name<<endl;
        cout<<"游戏角色生命值: "<<vitality<<endl;
    }
    //大战boss生命值变为0
    void fight()
    {
        this->vitality = 0;
    }
};
//角色状态管理者类
class RoleStateCaretaker
{
private:
    RoleStateMemento memento;
public:
    void set_memento(RoleStateMemento mem)
    {
        this->memento = mem;
    }
    RoleStateMemento get_memento()
    {
        return this->memento;
    }
};

int main()
{
    //前
    GameRole Vincent(100,"VincentChen");
    Vincent.show();
    //保存进度
    RoleStateCaretaker StateManager;
    StateManager.set_memento(Vincent.save_state());
    //大战
    Vincent.fight();
    cout<<endl<<"大战boss后的状态："<<endl;
    Vincent.show();
    //恢复进度
    Vincent.role_state_recover(StateManager.get_memento());
    cout<<endl<<"恢复进度后的状态："<<endl;
    Vincent.show();
    return 0;
}


































