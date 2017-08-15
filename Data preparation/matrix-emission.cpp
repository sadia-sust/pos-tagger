#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using  namespace std;

int main()
{
    FILE *input;
    wchar_t buf[1000];
    set<string> S;
    map<string, int>mp;
    int in=0;
    freopen("emission_smalldd.txt","w",stdout);
    setlocale(LC_CTYPE,"it_IT.UTF-8");

    if ((input = fopen("input.txt","r")) == NULL)
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
        sscanf(nm   ,"%s %d",nm2,&tg[0]);
        //puts(nm2);

        S.insert(nm2);




    }



    fclose(input);
 //   cout<<S.size()<<endl; //uncomment it to know the unique workd count
    int transision_mat[20][5000];
    memset(transision_mat,0,sizeof transision_mat);
    for(set<string>:: iterator it = S.begin(); it != S.end(); it++)
    {
        mp[*it] = in++;
       // cout<<*it<<" ";


    }
    puts("");
    if ((input = fopen("input.txt","r")) == NULL)
        return 1;
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
        sscanf(nm   ,"%s %d",nm2,&tg[0]);
        //puts(nm2);
        transision_mat[tg[0]][mp[nm2]]++;
        S.insert(nm2);




    }
    for(int i=0;i<12;i++)
    {
        int sum=0;
        for(int j=0;j<S.size();j++)
        printf("%d ",transision_mat[i][j]);

        puts("");
    }



    fclose(input);



    return 0;



}

