#include <iostream>

using namespace std;

#define tamMax 10


int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, m, p, q, i, j, soma;
    int matA[tamMax][tamMax], matB[tamMax][tamMax], matC[tamMax][tamMax];


    do{
        cout<<"Digite o valor de n (entre 2 e 10): ";
        cin >> n;
        if(n<2||n>tamMax) cout<<"Valor inválido. Digite um valor entre 2 e 10!"<<endl;
    }while(n<2||n>tamMax);

    do{
        cout<<"Digite o valor de m (entre 2 e 10): ";
        cin >> m;
        if(m<2||m>tamMax) cout<<"Valor inválido. Digite um valor entre 2 e 10!"<<endl;
    }while(m<2||m>tamMax);

        do{
        cout<<"Digite o valor de p (entre 2 e 10): ";
        cin >> p;
        if(p<2||p>tamMax) cout<<"Valor inválido. Digite um valor entre 2 e 10!"<<endl;
    }while(p<2||p>tamMax);

    do{
        cout<<"Digite o valor de q (entre 2 e 10): ";
        cin >> q;
        if(q<2||q>tamMax) cout<<"Valor inválido. Digite um valor entre 2 e 10!"<<endl;
    }while(q<2||q>tamMax);


    if(m!=p){
        cout<<"Não é possível realizar a multiplicação das matrizes!"<<endl;
    }else{
        //lendo a matriz A
        cout<<endl<<"Matriz A"<<endl;
        for(i=0;i<n;i++){
            for (j=0; j<m; j++){
                cout<<"Digite o valor do elemento ("<<i+1<<","<<j+1<<"): ";
                cin >> matA[i][j];
            }
        }

        //lendo a matriz B
        cout<<endl<<"Matriz B"<<endl;
        for(i=0;i<p;i++){
            for (j=0; j<q; j++){
                cout<<"Digite o valor do elemento ("<<i+1<<","<<j+1<<"): ";
                cin >> matB[i][j];
            }
        }

        //Saída matriz A
        cout<<endl<<"Matriz A"<<endl;
        for(i=0;i<n;i++){
            for (j=0; j<m; j++){
                cout<<"["<<matA[i][j]<<"]";
            }
          cout<<endl;
        }

        //Saída matriz B
        cout<<endl<<"Matriz B"<<endl;
        for(i=0;i<p;i++){
            for (j=0; j<q; j++){
                cout<<"["<<matB[i][j]<<"]";
            }
            cout<<endl;
        }

        //matriz C será da ordem nxq
        for (i=0; i<n; i++){
            for (j=0; j<q; j++){
                for (int l=0; l<n; l++){
                    soma += matA[i][l]*matB[l][j];
                }
                matC[i][j] = soma;
                soma = 0;
            }

        }

        //Saída matriz C
        cout<<endl<<"Matriz Resultante AxB"<<endl;
        for(i=0; i<n; i++){
            for (j=0; j<q; j++){
                cout<<"["<<matC[i][j]<<"]";
            }
            cout<<endl;
        }

    }

    return 0;
}
