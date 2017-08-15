#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
using  namespace std;

int main()
{
    FILE *input;
    wchar_t buf[1000];
    set<string> S;
    map<string, vector<int> >freq;
    int in=0;
    freopen("temp33.txt","w",stdout);
    setlocale(LC_CTYPE,"it_IT.UTF-8");

    if ((input = fopen("word_tags_count.txt","r")) == NULL)
        return 1;;;
    int fl=0;
    string st;
    while (fgetws(buf,1000,input)!=NULL)
    {

        wstring ws(buf);
        string str(ws.begin(), ws.end());
         S.insert(st);
     if(str!="।- 0\n")
     cout<<str;

    }



    fclose(input);
//    for(set<string>:: iterator it = S.begin(); it != S.end(); it++)
//    {
//        cout<<*it<<" : ";
//        for(int i=0; i<freq[*it].size(); i++)
//            cout<<" "<<freq[*it][i];
//        cout<<endl;
//    }

    return 0;



}
