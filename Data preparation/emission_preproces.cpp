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
    freopen("word_tags_count.txt","w",stdout);
    setlocale(LC_CTYPE,"it_IT.UTF-8");

    if ((input = fopen("profile_matrix_2.txt","r")) == NULL)
        return 1;;;
    int fl=0;
    string st;
    while (fgetws(buf,1000,input)!=NULL)
    {

        wstring ws(buf);
        string str(ws.begin(), ws.end());
         string st = "",tag="";
        int flag=0,valid=0,IN=0;
        char nm[10000],nm2[200];
        for(int i=0;i<str.size();i++)
        {
            nm[IN++]=str[i];

        }
        nm[IN]='\0';
        int tg[15];
        sscanf(nm   ,"%s %d %d %d %d %d %d %d %d %d %d %d %d",nm2,&tg[0],&tg[1],&tg[2],&tg[3],&tg[4],&tg[5],&tg[6],&tg[7],&tg[8],&tg[9],&tg[10],&tg[11]);
        //puts(nm2);

        int mx=tg[0],value_tag=0;
        for(int i=1;i<12;i++)
        {
            if(tg[i]>mx)
            {
                mx=tg[i];
                value_tag=i;
            }
        }

        cout<<nm2<<" "<<value_tag<<endl;
//         S.insert((string)nm2);
//       freq[(string)nm2].push_back(value_tag);




//            if(S.find(st)!=S.end())
        // cout<<st<<endl;



        in++;

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
