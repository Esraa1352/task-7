#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    int c;
    cin>>r;
    cin>>c;

    int juictice_league[r][c];
    int villians[r][c];

    //juctice league power levels
    for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
            {
            cin>>juictice_league[i][j];
            }
        }
    //villains power levels

    for(int i=0;i<r;i++)
        {
        for(int m=0;m<c;m++)
            {
                cin>>villians[i][m];
            }
        }
    //score calculation
    int win=0,lose=0,tie=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (juictice_league[i][j]>villians[i][j]){
                win+=1;
            }
            else if (juictice_league[i][j]<villians[i][j]){
                lose+=1;
            }
            else if (juictice_league[i][j]==villians[i][j]){
                tie+=1;
            }
        }}

    //result printing
        if (win>lose){
            cout<<"Justice League";
        }
        else if (win<lose){
            cout<<"Villains";
        }
        else if (win==lose){
        cout<<"tie";}


   return 0;
}


