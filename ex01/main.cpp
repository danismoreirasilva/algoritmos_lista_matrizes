#include <iostream>

using namespace std;

#define tamMax 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    int matM[tamMax][tamMax], n, p, q, prodLinha, vetV[tamMax], soma2c = 0, somaTodos = 0, somaDp = 0, posVet = 0, valorAux = 0;

    //leitura da ordem da matriz;
    do{
        cout << "Digite a ordem da matriz (entre 1 e 10): ";
        cin >> n;
        if (n<1||n>tamMax) cout <<"Valor inválido. Digite um valor entre 1 e 10!" <<endl;
    }while(n<1||n>tamMax);


    //leitura da matriz;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Digite o elemento ("<<i+1<<","<<j+1<<") :";
            cin >> matM[i][j];
        }
    }

     //Saida
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "["<<matM[i][j]<<"]";
        }
        cout <<endl;
    }

    //soma elementos 2º coluna (c=1)
    for (int l=0; l<n; l++){
        soma2c += matM[l][1];
    }

    //produto por linha;
    for (int i=0; i<n; i++){
        prodLinha = 1;
        for(int j=0; j<n; j++){
            prodLinha *= matM[i][j];
        }
        vetV[posVet] = prodLinha;
        posVet++;
    }

    //some elementos;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            somaTodos += matM[i][j];
            if (i==j) somaDp += matM[i][j];
        }
    }

    cout <<endl;
    cout << "A soma dos elementos da 2º coluna é: " << soma2c<<endl;
    cout << "O produto das linhas da matriz é: "<<endl;

    for (int i=0; i<posVet; i++){
        cout<<"["<<vetV[i]<<"] ";
    }
    cout <<endl;
    cout << "A soma de todos os elementos da matriz é: " << somaTodos<<endl;
    cout << "A soma da DP da matriz é: " << somaDp<<endl;


    //leitura dos valores das linhas p e q;
    do{
        cout << "Digite os valores das linhas p e q: ";
        cin >> p >> q;
        if (p==q || (p<1||p>n) ||(q<1||q>n)) cout <<"Os valores de p e q devem ser diferentes e estar entre 1 e " <<n<<"."<<endl;
    }while(p==q || (p<1||p>n) || (q<1||q>n));


      //permutando as linhas p e q
    for (int i=0; i<n; i++){
        valorAux = matM[p-1][i];
        matM[p-1][i] = matM[q-1][i];
        matM[q-1][i] = valorAux;
    }

     //Matriz permutada
     cout <<endl<<"Matriz Permutada"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "["<<matM[i][j]<<"]";
        }
        cout <<endl;
    }

    return 0;
}
