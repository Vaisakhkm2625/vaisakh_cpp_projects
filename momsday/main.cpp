#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    system("color a");
    system("systeminfo");
    char a[40],b[50]="type ";
    cin>>a;
    while(!getch());
    system("mode con: cols=114 lines=50");
    system("cls");
    system("color d");
    strcat(b,a);
    system(b);
    while(!getch());
    return 0;
}
