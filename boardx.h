#ifndef BOARDX_H
#define BOARDX_H
#include "cstdlib"
#include <iostream>
using namespace std;

class Boardx
{
    public:
        Boardx();
        virtual ~Boardx();
        void initialize();
        void render();
        void choice();
        bool checkwin();
        void update(int move, char icon);
        bool gameDraw();

    protected:
    private:
    char box[9];

};

#endif // BOARD_H
