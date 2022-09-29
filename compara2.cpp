//creado por gerard garces
//28-09-2022 modificado
#include<iostream>
using namespace std;
int main()
{
  float g,p;
  cout<<"Ingrese g  : "; cin>>g;
  cout<<"Ingrese p  : "; cin>>p;
  if(g==p){
     cout<<"Son iguales"<<endl;
  }else{
     if(g<p){
       cout<<g<<" es el menor que "<<p<<"\n";
     }else{
       cout<<p<<" es el menor que "<<g<<"\n";
     }
  }

return (0);




}
