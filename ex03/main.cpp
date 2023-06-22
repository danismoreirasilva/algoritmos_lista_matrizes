#include <iostream>

using namespace std;

#define tamMax 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    int matM[tamMax][tamMax], n;

    do{
        cout<<"Digite o valor de n (entre 1 e 10): ";
        cin >> n;
        if(n<1||n>tamMax) cout<<"Valor inválido. Digite um valor entre 1 e 10!"<<endl;
    }while(n<1||n>tamMax);


    //inicializando a matriz;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i<j) matM[i][j] = 2;
            else if (i>j) matM[i][j] = 0;
            else if (i==j){
                if((i==0&&j==0)||(i==n-1&&j==n-1)) matM[i][j] = 20;
                else matM[i][j] = 1;
            }
        }
    }

    //Escrevendo a matriz;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "[" << matM[i][j]<<"]";
        }
        cout << endl;
    }

    return 0;
}
