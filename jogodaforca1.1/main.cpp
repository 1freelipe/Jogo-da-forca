#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int tamanhoPalavra(char palavra[30]);
void preencherComTracos(char secreta[30], int tam);
void mostrarSecreta(char secreta[30]);
void verificaPalavra(char secreta[30], char palavra[30], char letra, bool &acerto, int &acertos);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char palavra[30], secreta[30], letra, opc;
    int acertos, chances, tam;
    bool acerto, jogarNovamente=true;

while(jogarNovamente){
    chances = 6;
    acertos = 0;
    acerto = false;

    cout << "Digite uma palavra: ";
    cin >> palavra;
    system("cls");

    tam = tamanhoPalavra(palavra);

    preencherComTracos(secreta, tam);

    while(chances > 0 && acertos != tam){
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra secreta: ";
        mostrarSecreta(secreta);

        cout << endl;
        cout << "Digite uma letra: ";
        cin >> letra;
        acerto = false;
        verificaPalavra(secreta, palavra, letra, acerto, acertos);

        if(!acerto){
            chances--;
        } system("cls");

    }

    if(acertos == tam){
        cout << "Voc� ganhou!!" << endl;
        cout << "A palavra era: " << palavra << endl;
    } else {
        cout << "Voc� perdeu!!" << endl;
        cout << "A palavra era: " << palavra << endl;

    }

    cout << "Deseja jogar novamente [S/N]? " << endl;
    cin >> opc;

    if(opc == 's' || opc == 'S'){
        jogarNovamente = true;
    } else {
        jogarNovamente = false;
    }
}

    cout << "Obrigado por jogar" << endl;
    system("pause");

    return 0;
}

int tamanhoPalavra(char palavra[30]){
    int i = 0;
    int tam = 0;

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    return
        tam;

}

void preencherComTracos(char secreta[30], int tam){
    for(int i=0; i < tam; i++){
        secreta[i] = '-';
    }
    secreta[tam] = '\0';
}

void mostrarSecreta(char secreta[30]){
    int tam = tamanhoPalavra(secreta);
    for(int i=0; i < tam; i++){
    cout << secreta[i];
    }
}

void verificaPalavra(char secreta[30], char palavra[30], char letra, bool &acerto, int &acertos){
    int tam = tamanhoPalavra(palavra);
    acerto = false;

    for(int i=0; i < tam; i++){
        if(palavra[i] == letra && secreta[i] == '-'){
            acertos++;
            acerto = true;
            secreta[i] = palavra[i];
        }
    }
}
