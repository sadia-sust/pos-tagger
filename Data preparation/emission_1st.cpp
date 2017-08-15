#include<bits/stdc++.h>
using namespace std;
double matrix[150][9081];
int main()
{
    freopen("em.txt","r",stdin);

    freopen("em2.txt","w",stdout);

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<3081;j++)
        {

            scanf("%lf",&matrix[i][j]);
          //  matrix[i][j]++;

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
        for(int j=0;j<3081;j++)
        {
            ct+=matrix[i][j];

        }
        double sum=0;
        for(int j=0;j<3081;j++)
        {

            if(ct)
            matrix[i][j]/=ct;
            printf("%0.4lf ",matrix[i][j]);

        }
        puts("");


    }

}
