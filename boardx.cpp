#include "Boardx.h"
#include "Playerx.h"
#include "Gamex.h"
Boardx::Boardx()
{
    //ctor
}

Boardx::~Boardx()
{
    //dtor
}

void Boardx::initialize (){
    for (int n=0; n<10; n++){
    box[n] = '0'+n;
    }
}


void Boardx::render (){
    playerx P;
    Gamex g;
    cout << "\n\t\t TIC TAC TOE"<< endl << endl;
    cout << "\t******************************" <<endl;
	cout << "\n\tPlayer 1 (+)  vs.  Player 2 (*)" << endl << endl;
	cout << "\t******************************" <<endl;
	cout << "          __________________________" << endl;
	cout << "         |        |        |        |" << endl;
	cout << "         |    " << box[1] << "   |    " << box[2] << "   |    " << box[3] <<"   |"<< endl;
	cout << "         |________|________|________|" << endl;
	cout << "         |        |        |        |" << endl;
	cout << "         |    " << box[4] << "   |    " << box[5] << "   |    " << box[6] <<"   |"<< endl;
	cout << "         |________|________|________|" << endl;
	cout << "         |        |        |        |" << endl;
	cout << "         |    " << box[7] << "   |    " << box[8] << "   |    " << box[9] <<"   |"<< endl;
	cout << "         |________|________|________|" << endl;
	cout << "\n\t******************************" <<endl << endl;
}
void Boardx::update (int move, char icon){
    loop1:
    cout << "\n\n\tEnter your move: ";
    cin >> move;
    system("cls");
        if (move == 1 && box[1] == '1')
			box[1]= icon;
		else if (move == 2 && box[2] == '2')
			box[2] = icon;
		else if (move == 3 && box[3] == '3')
			box[3] = icon;
		else if (move == 4 && box[4] == '4')
			box[4] = icon;
		else if (move == 5 && box[5] == '5')
			box[5] = icon;
		else if (move == 6 && box[6] == '6')
			box[6] = icon;
		else if (move == 7 && box[7] == '7')
			box[7] = icon;
		else if (move == 8 && box[8] == '8')
			box[8] = icon;
		else if (move == 9 && box[9] == '9')
			box[9] = icon;
        else {
        render();
        cout << "\tOOPPPSSS.. Please Try Again." << endl;
        goto loop1;}
}
bool Boardx::checkwin(){

    if(box[1] == box[2] && box[2] == box[3])
    return 1;
    else if(box[4] == box[5] && box[5] == box[6])
    return 1;
    else if(box[7] == box[8] && box[8] == box[9])
    return 1;
    else if(box[1] == box[4] && box[4] == box[7])
    return 1;
    else if(box[2] == box[5] && box[5] == box[8])
    return 1;
    else if(box[3] == box[6] && box[6] == box[9])
    return 1;
    else if(box[1] == box[5] && box[5] == box[9])
    return 1;
    else if(box[3] == box[5] && box[5] == box[7])
    return 1;

    else
    return false;
}
bool Boardx::gameDraw()
{
    if (box[1]!= '1'&&box[2]!= '2'&&box[3]!= '3'&&box[4]!= '4'
        &&box[5]!= '5'&&box[6]!= '6'&&box[7]!= '7'&&box[8]!= '8'&&box[9]!= '9')
        return 1;
    else
        return 0;
}
