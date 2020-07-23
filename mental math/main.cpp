#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    int a,c,b;
    system("color a");
    system("title math trainer");
    cout << "Hello ! welcome to maths trainer" << endl;
    srand(time(0));
    for(int i=0; i<100; i++)
    {
        cout<<time(0);
        a=rand()%100;
        b=rand()%100;
        std::cout<<"\n"<<a<<" + "<<b<<" = ";
        std::cin>>c;
        cout<<time(0);
        if(c==(a+b))
            std::cout<<"\n\ncorrect!\n";
        else
            std::cout<<"\n\nwrong\n";
        getch();
        system("cls");
        std::cout<<"\n"<<a<<" * "<<b<<" = ";
        std::cin>>c;
        if(c==(a*b))
            std::cout<<"\n\ncorrect!\n";
        else
            std::cout<<"\n\nwrong\n";
        getch();
        system("cls");
    }
    return 0;
}
