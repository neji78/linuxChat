#ifndef H_DISPLAY
#define H_DISPLAY
#include <iostream>
#include <string>
#include <list>
using namespace std;
void banner(string sign = "#"){
    for(int i = 0; i < 10; i++){
        cout<<sign;
    }
    cout<<endl;
}
void header(string title)
{
    cout<<"/t/t/t"<<title<<"/t/t/t"<<endl;
}
void message(string msg)
{
    cout<<msg<<endl;
}
void menu(string title, string info, list<string> options)
{
    banner();
    header(title);
    message(info);
    for(int i = 0; i < options.size(),i++)
    {
        cout<<i + 1<<"."<<options[i]<<endl;
    }
    banner();
}
#endif