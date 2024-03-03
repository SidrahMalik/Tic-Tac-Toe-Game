#include <iostream>
using namespace std;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
	int player = 1,i,choice;
    char select;
    do
    {
        board();
        player=(player%2)?1:2;
        cout <<"Player "<< player <<" Please enter a number:"<<endl;
        cin >> choice;
        select=(player == 1) ? 'X' : 'O';
        if (choice == 1 && square[1] == '1')
            square[1] = select;
        else if (choice == 2 && square[2] == '2')
            square[2] = select;
        else if (choice == 3 && square[3] == '3')
            square[3] = select;
        else if (choice == 4 && square[4] == '4')
            square[4] = select;
        else if (choice == 5 && square[5] == '5')
            square[5] = select;
        else if (choice == 6 && square[6] == '6')
            square[6] = select;
        else if (choice == 7 && square[7] == '7')
            square[7] = select;
        else if (choice == 8 && square[8] == '8')
            square[8] = select;
        else if (choice == 9 && square[9] == '9')
            square[9] = select;
        else
        {
            cout<<"Invalid selection";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();
        player++;
    }while(i==-1);
    board();
    if(i==1)
        cout<<"Player "<<--player<<" won the game";
    else
        cout<<"Game is drawn";
    cin.ignore();
    cin.get();
    return 0;
}
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}
void board()
{
    system("cls");
	cout<<"Welcome to TIC TAC TOE Game"<<endl;
	cout<<"Let's begin the game";
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl << endl;
}
