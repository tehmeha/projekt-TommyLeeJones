#include<iostream>
using namespace std;

int main()
{
    int polje[8][8]={{0,0,0,0,0,0,21,0},
             {0,0,26,14,0,0,0,15},
             {0,0,0,26,0,0,0,0},
             {25,0,26,0,0,13,0,0},
             {22,0,26,0,0,0,0,0},
             {0,25,0,0,0,0,13,11},
             {0,0,0,0,0,12,0,0},
             {25,24,0,0,0,0,15,0}};
    cout<<"";
    for(int i=0;i<8;i++)
    {
        cout<< i <<"  ";
    }
    cout<<endl<<"----------------------"<<endl;
    while(1)
    {
    for (int i=0;i<8;i++)
    {
        cout<<i<<"I ";
        for(int j=0;j<8;j++)
        {
            if( polje[i][j] == 11 )
                cout<<"K1"<<" ";
            else if( polje[i][j] == 21 )
                cout<<"K2"<<" ";
            else if(polje[i][j]==12)
                cout<<"Q1"<<" ";
            else if(polje[i][j]==22 )
                cout<<"Q2"<<" ";
            else if(polje[i][j]==13)
                cout<<"B1"<<" ";
            else if(polje[i][j]==23 )
                cout<<"B1"<<" ";
            else if(polje[i][j]==14)
                cout<<"K1"<<" ";
            else if(polje[i][j]==24 )
                cout<<"K2"<<" ";
            else if(polje [i][j]==15)
                cout<<"R1"<<" ";
            else if(polje[i][j]==25)
                cout<<"R2"<<" ";
            else if (polje [i][j]==16)
                cout<<"P1"<<" ";
            else if(polje [i][j]==26)
                cout<<"P2"<<" ";
            else
                cout<<"-"<<"  ";
        }cout << endl;
     }
    string oznaka_figure;
    int redak, stupac;
    cout<<"Unesite figuru koju zelite pomaknuti:";
    cin>>oznaka_figure;

    cout<<"Unesite redak u koji zelite pomaknuti figuru:";
    cin>>redak;

    cout<<"Unesite stupac u koji zelite pomaknuti figuru:";
    cin>>stupac;

    int figura;
            if( oznaka_figure == "K1" )
                figura = 11;
            else if( oznaka_figure== "K2" )
                figura = 12;
            else if(oznaka_figure=="Q1")
                figura =21;
            else if(oznaka_figure== "Q2")
                figura =22;
            else if(oznaka_figure=="B1")
                figura =13;
            else if(oznaka_figure== "B2")
               figura =23;
            else if(oznaka_figure=="K1")
                figura =14;
            else if(oznaka_figure== "K2")
                figura =24;
            else if(oznaka_figure=="R1")
                figura =15;
            else if(oznaka_figure=="R2")
                figura =25;
            else if (oznaka_figure=="P1")
                figura =16;
            else if(oznaka_figure=="P2")
                figura =26;
    polje[redak][stupac]=figura;
    }

    return 0;

}


















