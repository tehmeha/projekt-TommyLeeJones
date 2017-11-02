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
    for (int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if( polje[i][j] == 11 )
                cout<<"K1"<<"\t";
            else if( polje[i][j] == 21 )
                cout<<"K2"<<"\t";
        }cout << endl;
     }
    return 0;
}


















