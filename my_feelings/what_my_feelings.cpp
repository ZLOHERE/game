#include "what_my_feelings.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

void hidecursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void what_my_feelings::toYou()
{
    ifstream fin;
    
 //   while (true)
	//{
        fin.open("feels.txt");
        if (!fin.is_open()) {
            fin.close();
            return;
        }
        else {
            string temp;
            while (!fin.eof()) {
                getline(fin, temp);
                cout << temp << endl;
            }
            fin.close();
        }
        printf("\x1b[11A");
        printf("\x1b[12C"); 
        hidecursor();
        while (true)
        {
            printf(" ");
            printf("\x1b[D");
            Sleep(500);
            printf(":");
            printf("\x1b[D");
            Sleep(500);
        }







        //Sleep(300);
        //system("cls");
        //fin.open("feels1.txt");
        //if (!fin.is_open()) {
        //    fin.close();
        //    return;
        //}
        //else {
        //    string temp;
        //    while (!fin.eof()) {
        //        getline(fin, temp);
        //        cout << temp << endl;
        //    }
        //    fin.close();
        //}
        //Sleep(300);
        //system("cls");
	//}
}
