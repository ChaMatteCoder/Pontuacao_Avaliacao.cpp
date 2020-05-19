#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, atraso;
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

    cout << "Score de volume de compras = " << endl << endl;
    cout << "Score de inadimplencia = " << endl;
    cout << "Score de forma de pagamento = " << endl << endl;
    cout << "Classificacao final = " << endl;

    return 0;
}
