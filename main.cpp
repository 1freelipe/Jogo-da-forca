#include <iostream>
#include <stdlib.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    char palavra[30], letra, secreta[30];
    int i, tam, acertos, chances;
    bool acerto;

    i=0;
    tam=0;
    acertos=0;
    chances=6;
    acerto=false;

    cout << "*-------------*" << endl;
    cout << "*JOGO DA FORCA*" << endl;
    cout << "*-------------*" << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(int i=0; i < 30; i++){
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos < tam)){
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra secreta: ";
        for(int i=0; i < tam; i++){
            cout << secreta[i];
        }
        cout << "\nDigite uma letra: ";
        cin >> letra;
        for(int i=0; i < tam; i++){
            if(palavra[i] == letra && secreta[i] == '-'){
                acerto=true;
                secreta[i] = palavra[i];
                acertos++;
            }
        } if (!acerto){
            chances--;
        } acerto = false;
          system("cls");
    }

    if(acertos == tam){
        cout << "Voc� venceu, par�bens!!" << endl;
        cout << "A palavra era: " << palavra << endl;
    } else {
        cout << "Voc� perdeu!! Mais sorte na pr�xima." << endl;
        cout << "A palavra era: " << palavra << endl;
    }

    system("pause");




    return 0;
}
