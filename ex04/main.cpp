#include <iostream>

using namespace std;

#define tamN 15
#define tamM 25

int main()
{

    setlocale(LC_ALL, "portuguese");
    int n, m;
    float matA[tamN][tamM], matB[tamM][tamN];
    bool ehSimetrica = true;

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

    //transpondo a matriz
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          matB[j][i] = matA[i][j];
        }
    }



    //Escrevendo a matriz A
    cout << endl<<"Matriz A"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          cout<<"["<<matA[i][j]<<"]";
        }
        cout << endl;
    }

    //Escrevendo a matriz B transposta
    cout << endl<<"Matriz B - Transposta"<<endl;
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cout<<"["<<matB[i][j]<<"]";
        }
        cout << endl;
    }

    if(n!=m){
       cout << endl<< "A matriz A não é simétrica porque não é quadrada!"<<endl;
    }else{
        for (int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matA[i][j]!=matA[j][i]){
                    ehSimetrica = false;
                    break;
                }
            }
        }
        if(not(ehSimetrica)) cout << endl << "A matriz A não é simétrica!"<<endl;
        else cout << endl << "A matriz A é simétrica!"<<endl;
    }
    return 0;
}
