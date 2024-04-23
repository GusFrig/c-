#include <iostream>
using namespace std;
int main(){
    float salario , horas , dinheiro , salarioex
    cout << "quantas horas o funcionário trabalhou:";
    cin>>horas;
    cout<<"quanto é o salário por hora:";
    cin>>dinheiro;
    salario=horas*dinheiro;
    salarioex=(horas*dinheiro*50)/100+salario
    if (horas>40){
        cout<<"o salário é de:"<<salario<<;
    }else{
        cout<<"o salário é de:"<<salarioex<<;
    }
return 0;
}