#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

/**
n - number of disks     f - form position
h - helper position     t - target position
 */

void move_(char f,char t)
{
    static int a;
    cout<<a+1<<" move disk from "<<f<<" to "<<t<<"\n";
    a++;
}
void hanoi(int n,char f,char h,char t)//n - number of disks
{
    if(n==0)
    {
        return;
    }
    hanoi(n-1,f,t,h);
    move_(f,t);
    hanoi(n-1,h,f,t);
}
int main()
{
    system("color 4e");
    cout<<"\n\n\n\n\t\t\t\tTHE TEMPLE OF HANOI GAME";
    cout<<"\n\n \t\t\t\t\t computer player \n\n";
    int no_of_disks;
    cout<<"\t\tEnter no of disks  --->>>";
    cin>>no_of_disks;
    system("cls");
    system("color 1e");
    hanoi(no_of_disks,'a','b','c');
    getch();
    return 0;
}
