#include<bits/stdc++.h>
using namespace std;
double matrix[150][9081];
int main()
{
    freopen("em2.txt","r",stdin);

    freopen("em3.txt","w",stdout);

    for(int i=0;i<12;i++)
    {
        double sum=0;
        for(int j=0;j<3081;j++)
        {

            scanf("%lf",& matrix[i][j]);
            sum+=matrix[i][j];

        }
        if(sum<1.0)
        matrix[i][13]+=(1.0-sum);
        if(sum>1.0)
        {
            for(int I=0;I<3081;I++)
            {
                if(matrix[i][I]>(sum-1.0))
                {
                    matrix[i][I]-=(sum-1.0);
                    break;
                }
            }
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
        double sum=0;
        for(int j=0;j<3081;j++)
        {

            sum+=matrix[i][j];
            printf("%0.4lf ",matrix[i][j]);

        }
        //printf("%lf",sum);
        puts("");


    }

}
