#include <iostream>

using namespace std;

#define tamN 15
#define tamM 25

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, m, vetR[tamN],matA[tamN][tamM], posVet = 0, somaLinha = 0;

    do{
        cout<<"Digite o valor de n (entre 1 e 15): ";
        cin >> n;
        if(n<1||n>tamN) cout<<"Valor inválido. Digite um valor entre 1 e 15!"<<endl;
    }while(n<1||n>tamN);

    do{
        cout<<"Digite o valor de m (entre 1 e 25): ";
        cin >> m;
        if(m<1||m>tamM) cout<<"Valor inválido. Digite um valor entre 1 e 25!"<<endl;
    }while(m<1||m>tamM);

    //Lendo a matriz
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          cout<<"Digite o valor do elemento ("<<i+1<<","<<j+1<<"):";
          cin >> matA[i][j];
        }
    }

    //calculando
    for (int i=0; i<n; i++){
        somaLinha = 0;
        for(int j=0; j<m; j++){
          somaLinha +=matA[i][j];
        }
        vetR[posVet] = somaLinha;
        posVet++;
    }

    //exibindo os resultados
    cout << endl<<"Vetor Resultante" << endl;
    for (int i=0; i<posVet; i++){
        cout <<"["<<vetR[i]<<"] ";
    }

    return 0;
}
