#include "Gamex.h"
#include "Playerx.h"
#include "Boardx.h"
Gamex::Gamex()
{
    //ctor
}

Gamex::~Gamex()
{
    //dtor
}

void Gamex::initialize (){
    m_board.initialize();
    m_p1.setName("Montejero Haciendero");
    m_p1.setIcon('+');
    m_p2.setName("Panchiquito Ochoa");
    m_p2.setIcon('*');
    m_currentPlayer = &m_p1;

}
void Gamex::update (){
    m_board.update(m_currentPlayer->getMove(), m_currentPlayer->getIcon());

    m_isComplete = checkwin();
    if (m_isComplete==1)
    {
        m_board.render();
        cout << "\tThe winner is " << m_currentPlayer->getName() << endl;
    }
    if (gameDraw()==1 && m_isComplete==0)
    {
    m_board.render();
    cout <<"\t\t   Game Draw" <<endl;
    }
    switchplayer();

}
void Gamex::render (){
    m_board.render();
    cout << "\tYour turn -->  " << m_currentPlayer->getName();

    }


bool Gamex::checkwin (){
    m_board.checkwin();
}


void Gamex::switchplayer(){
    if (m_currentPlayer == &m_p1)
        m_currentPlayer = &m_p2;
    else if (m_currentPlayer == &m_p2)
        m_currentPlayer = &m_p1;
}

void Gamex::run(){
    while(m_isComplete==0&&gameDraw()==0){
    render();
    update();


}
}

bool Gamex::gameDraw()
{
    m_board.gameDraw();

}
