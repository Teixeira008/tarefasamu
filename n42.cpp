/*/Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são: "Telefonou para a vítima?" "Esteve no local do crime?" "Mora perto da vítima?" "Devia para a vítima?" "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".

#include <iostream> 
using namespace std;

int main(){ 

    int perguntas, respostas = 0;

    cout <<"Telefonou para a vitima?\n";
    cin >> perguntas;   
    if(perguntas == 1) respostas++;   

    cout <<"Esteve no local do crime?\n";
    cin >> perguntas;
    if(perguntas == 1) respostas++;

    cout <<"Mora perto da vitima?\n";
    cin >> perguntas;
    if(respostas == 1) respostas++;

    cout <<"Devia para a vitima?\n";
    cin >> perguntas;
    if(respostas == 1) respostas++;

    cout <<"Já trabalhou com a vitima?\n";
    cin >> perguntas;
    if(respostas == 1) respostas++;

    if(respostas >= 2){
        cout << "Suspeita";
    } else if(respostas == 3, respi 4){
        cout << "Cúmplice";
        } else if(respostas == 5){
            cout << "Assassino";
            } else {
                cout << "Inocente";

    }
    return 0;

}   
/*/

#include <iostream> 
#include <string>
using namespace std;

int main() { 
    string resposta;

    int respostas = 0;
    
    

    cout << "Telefonou para a vitima?\n";
    cin >> resposta;   
    if (resposta == "sim") respostas++; 
    
    cout << "Esteve no local do crime?\n";
    cin >> resposta;
    if (resposta == "sim") respostas++; 

    cout << "Mora perto da vitima?\n";
    cin >> resposta;
    if (resposta == "sim") respostas++;

    cout << "Devia para a vitima?\n";
    cin >> resposta;
    if (resposta == "sim") respostas++; 

    cout << "Já trabalhou com a vitima?\n";
    cin >> resposta;
    if (resposta == "sim") respostas++; 

    if (respostas == 2) {
        cout << "Suspeita";
    } else if (respostas == 3 || respostas == 4) {
        cout << "Cúmplice";
    } else if (respostas == 5) {
        cout << "Assassino";
    } else {
        cout << "Inocente";
    }

    return 0;
}