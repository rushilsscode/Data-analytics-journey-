#include <iostream>
using namespace std;

void paper(){

    for (int i = 0; i <= 15; i++)
    {
        for (int j = 0; j <= 15; j++)
        {
            if (i == 5 || i == 10)
            {
                cout << "_";
            }
            else
            {
                if (j == 5 || j == 10)
                {
                    cout << "|";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }


}

void print_x(int n)
{
    // paper()<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || i==4)
            {
                if (j==0 || j==4)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
            }
            if (i==1 || i==3)
            {
                if (j==1 || j==3)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
            }
            if(i==2){
                if (j==2)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            
            }
            
        }
        cout << endl;
    }
}
int main()
{
    paper();

    cout << "   TIC TAC TOE" << endl;

    
    int player_1;
    int player_2;
    int cmd='x';
    int n=5;

    // cout << "player 1 name: ";
    // cin >> player_1;
    // cout << "player 2 name: ";
    // cin >> player_2;

    // cout << "player_1 turn";
    // cout << "cmd: ";
    // cin >> cmd;
    // cout << "place: ";
    // cin >> place;
    // cin >> n;

    if (cmd == 'x')
    {
        paper();
        print_x(n);
    }

    return 0;
}