#include <iostream>
using namespace std;
int main (){
    float nota1, nota2, media;
    cout << "digite a primeira nota:";
    cin >> nota1;
    cout <<"digite a segunda nota:";
    cin >> nota2;
    media=(nota1+nota2)/2;
    cout <<" a media foi:"<< media << endl;
    if (media>= 7){cout <<"aluno aprovado" <<endl;
    }else{cout <<"aluno reprovado" <<endl;
    }
    return 0;


}