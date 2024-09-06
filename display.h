#ifndef H_DISPLAY
#define H_DISPLAY
#include <iostream>
#include <string>
#include <vector>
using namespace std;
inline void banner(string sign = "#"){
    for(int i = 0; i < 10; i++){
        cout<<sign;
    }
    cout<<endl;
}
inline void header(string title)
{
    cout<<"\t\t\t"<<title<<"\t\t\t"<<endl;
}
inline void message(string msg)
{
    cout<<msg<<endl;
}
inline int menu(string title, string info, vector<string> options)
{
    int ret = -1;
    banner();
    header(title);
    message(info);
    for(int i = 0; i < options.size();i++)
    {
        cout<<i + 1<<"."<<options.at(i)<<endl;
    }
    banner();
    message("Enter Your Choose: " );
    cin>>ret;
    return ret - 1;
}
#endif