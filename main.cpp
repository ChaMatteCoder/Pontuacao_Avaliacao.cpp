#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, atraso, score1, score2, score3;
    double TicketMedio;
    string maioraDCB;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;


    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> compras;

    cout << "Qual o ticket medio? ";
    cin >> TicketMedio;
    cout << "" << endl;

    cout << "Quantas vezes o cliente atrasou o pagamento ? ";
    cin >> atraso;

    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> maioraDCB;
    cout << "" << endl;


    if (compras == 0 || compras < 0){
        score1 = 0;
    }
    else if (compras <= 2 && (TicketMedio * compras) <= 3000){
        score1 = 20;
    }
    else if (compras > 2 && (TicketMedio * compras) <= 3000){
        score1 = 40;
    }
    else{
        score1 = 60;
    }

    cout << "Score de volume de compras = " << score1;
    cout << "" << endl;

    if (compras == 0 || atraso > 1){
        score2 = 0;
    }
    else if (compras > 0 && atraso == 1){
        score2 = 15;
    }
    else {
        score2 = 30;
    }

    cout << "Score de inadimplencia = " << score2 << endl;

    if (compras == 0 && cin >> maioraDCB == "D"){
        score3 = 5;
    }
    else {
        score3 = 10;
    }

    cout << "Score de forma de pagamento = " << score3;
    cout << "" << endl;

    cout << "Classificacao final = " << endl;

    return 0;
}
