#include <iostream>

using namespace std;
struct Data{
    int dia;
    int mes;
    int ano;

};





bool ValidaData(Data dt){
    if(dt.dia>0&&dt.dia<31)
        cout<<"dia valido"<<endl;
    else{
        cout<<"dia invalido"<<endl;
        return 0;

    }
    if(dt.mes>0&&dt.mes<13)
        cout<<"mes valido"<<endl;
    else{
        cout<<"mes invalido"<<endl;
        return 0;
    }

    return 1;
}



Data InicializaData(int dia,int mes, int ano){

    Data dt;
    dt.dia=dia;
    dt.mes=mes;
    dt.ano=ano;

    return dt;
}






Data acresentarDias(Data dt,int dia){
   dt.dia+=dia;

    return dt;
}

void EscrevaExtenso(Data dt){
    cout<<dt.dia<<"/"<<dt.mes<<"/"<<dt.ano<<endl;
}



int main()
{
    bool valido;
    Data dt;
    cin>>dt.dia;
    cin>>dt.mes;
    cin>>dt.ano;
   dt=InicializaData(dt.dia,dt.mes,dt.ano);
   valido=ValidaData(dt);
   if(valido){
   dt=acresentarDias(dt,1);
   EscrevaExtenso(dt);
}else {
       cout<<"sefodeo";
       cout<<"nao";
}

    return 0;
}
