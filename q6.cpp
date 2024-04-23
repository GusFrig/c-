#include <iostream>
using namespace std;
int main(){
int nascimento, atual;
cout<< "Digite o ano que você nasceu";
cin>> nascimento;
cout<<"Digite o ano atual";
cin>> atual;
if((atual-nascimento) >= 16){
    cout<<"Já pode votar!"<<endl;
}else{
    cout<<"não pode votar:("<< endl;
}

}