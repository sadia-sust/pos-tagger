#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("new.txt","r",stdin);

    freopen("trnew.txt","w",stdout);
    double matrix[150][150];
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {

            scanf("%lf",& matrix[i][j]);
            matrix[i][j]+=1.0;

        }
    }
//    for(int i=0;i<12;i++)
//    {
//        for(int j=0;j<12;j++)
//        {
//            printf("%lf ",matrix[i][j]);
//
//        }
//        puts("");
//    }

    for(int i=0;i<12;i++)
    {
        double ct=0;
        for(int j=0;j<12;j++)
        {
            ct+=matrix[i][j];

        }
        double sum=0;
        for(int j=0;j<12;j++)
        {

            if(ct)
            matrix[i][j]/=ct;
            printf("%0.4lf ",matrix[i][j]);

        }
        puts("");


    }

}

