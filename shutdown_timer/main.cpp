#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    char b[10]="";
    int a,h,m,s;
    system("color c");
    cout<<"\n\n\n\t\tAre u sure u wanted to set a shutdown timer";
    cout<<"\n\nif YES ,type 'settimer'\t\t ELSE type 'no'  then press ENTER\n\n>>>>>";
    cin>>b;

    if(strcmp(b,"settimer")==0)
    {
        system("color a");
        cout<<"\nEnter HOURS>>";
        cin>>h;
        cout<<"\nEnter MINUTES>>";
        cin>>m;
        cout<<"\nEnter SECONDS>>";
        cin>>s;
        cout<<"timer started";
        a=h*3600+m*60+s;
        a=a*1000;
        Sleep(a);
        cout<<"shutting down";
        system("shutdown/s");
    }

    return 0;
}

