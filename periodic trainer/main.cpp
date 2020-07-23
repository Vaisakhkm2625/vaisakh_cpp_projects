#include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int eleno,no,score=0,maxno;
    srand(time(0));
    cout<<"\n\n Enter max atomic no >>>> "; cin>>maxno;
    char a[][3]= {"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","pr","Nd","pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"};
    while(no!=0)
    {
    eleno=rand()%(maxno);
    cout<<"\n\nAtomic number of "<<a[eleno]<<" is ";
    cin>>no;
    if(eleno==(no-1))
    {
        cout<<"\n\n correct! \n\n";
        score++;
    }
    else
        cout<<"\n\n wrong,Atomic number of "<<a[eleno]<<" is "<<eleno+1;
    }
    system("cls");
    cout<<"your score is "<<score;
    getch();
    return 0;
}

