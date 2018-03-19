#include "grille.h"
#include<iostream>
using namespace std;

Grille::Grille()
{
    nouvellePartie();
}

Grille::update(){

}

Grille::nouvellePartie(){
    if(grille!=NULL){
        while (grille.size()!=0){
            for(int i=0;i<4;i++)delete [] grille.top()[i];
            delete [] grille.top();
            grille.pop();
        }
        delete grille;
    }
    stack<new int*> grille;
    T=new int*[4];
    for(int i=0;i<4;i++)T[i]=new int[4];
    int i=rand()%4;
    int j=rand()%4;
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            if(x==i && y==j)
                T[x][y]=2;
            else
                T[x][y]=0;
        }
    }
    grille.push(T);
    emit grilleChanged();
}

Grille::gauche(){
    cout<<"Gauche"<<endl;
    T=grille.top();
    N=new int*[4];
    for(int i=0;i<4;i++)N[i]=new int[4];
    for(int i=0;i<4;i++){
        stack<new int> P;
        int a=0;
        int b=1;
        while(b<4){
            if(T[i][a]==T[i][b] && T[i][a]~=0){
                P.push(2*T[i][a]);
                a=b+1;
                b=b+2;
            }else if(T[i][a]==0){
                a++;
                b++;
            }else if(T[i][b]==0 && T[i][a]~=0){
                b++;
            }else if(T[i][a]~=T[i][b] && T[i][a]~=0 && T[i][b]~=0){
                P.push(T[i][a]);
                a=b;
                b++;
            }
        }
        if(a<4 && T[i][a]~=0)P.push(T[i][a]);
    }
}
