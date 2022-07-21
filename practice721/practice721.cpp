#include <iostream>

using namespace std;

//다형성

//다형성 겉은똑같은데 기능이 다르게 동작한다
// - 오버로딩
// - 오버라이딩

//바인딩 = 묶는다
//정적 바인딩 : 컴파일 시점에 결정
// 동적 바인딩  : 실행시점에 결정

class Player
{
public:
    void Move() { cout << "Move Player!" << endl; }

    //void Move(int a) { cout << "Move Player (int) !" << endl; }
    virtual void VMove() { cout << "Move Player!" << endl; }
public:
    int mHp;
};

class Knight : public Player
{
public:
    void Move() { cout << "Move Knight !" << endl; }
    virtual void VMove() { cout << "Move Knight!" << endl; }
public:
    int mStamina;
};

class Mange : public Player
{
public:
    int mMp;
};

void MovePlayer(Player* player)
{
    player->VMove();
}


int main()
{
    //Player p;
    //p.Move();
    
    Knight k;
    k.Move();

}