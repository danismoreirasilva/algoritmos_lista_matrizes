#include <iostream>

using namespace std;

#define tamMax 10

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matM[12][tamMax], i, j, n;
    float vetCusto[tamMax], vetPreco[tamMax], somaCustoFabricacao = 0, somaVenda = 0, vetReceitaBruta[12], vetLiquida[12], vetFabricacao[12];

    do{
        cout << "Digite a quantidade de tipos de motores: ";
        cin >> n;
        if (n<1||n>10) cout << "Valor inválido. Digite um valor entre 1 e 10." << endl;
    }while(n<1||n>10);

    //lendo a matriz de quantidade
    for (i=0; i<12; i++){
        for (j=0; j<n; j++){
            do{
                cout << "Digite a quantidade de tipos de motores do tipo M"<<j+1<<" produzido no mês "<<i+1<<": ";
                cin >> matM[i][j];
                if (matM[i][j]<0) cout << "Valor inválido. Digite um valor positivo." << endl;
            }while(matM[i][j]<0);

        }
    }

    //preenchendo o vetor
    for (i=0; i<n; i++){
        do{
            cout << "Digite o custo de fabricação do Motor M"<<i+1<<" R$: ";
            cin >> vetCusto[i];
            if (vetCusto[i]<1) cout << "Valor inválido. Digite um valor positivo." << endl;
        }while(vetCusto[i]<1);

        do{
            cout << "Digite o preço de venda do Motor M"<<i+1<<" R$: ";
            cin >> vetPreco[i];
            if (vetPreco[i]<1) cout << "Valor inválido. Digite um valor positivo." << endl;
        }while(vetPreco[i]<1);
    }

    //lendo a matriz de quantidade
    for (i=0; i<12; i++){
        somaCustoFabricacao = 0;
        somaVenda = 0;
        for (j=0; j<n; j++){
             somaCustoFabricacao += matM[i][j]*vetCusto[j];
             somaVenda += matM[i][j]*vetPreco[j];

        }
        vetFabricacao[i] = somaCustoFabricacao;
        vetReceitaBruta[i] = somaVenda;
        vetLiquida[i] = somaVenda - somaCustoFabricacao;
    }

    for (i=0; i<12; i++){
        cout<<"Mês "<<i+1<<endl;
        cout<<"Custo de fabricação dos motores é de: R$ "<<vetFabricacao[i]<<endl;
        cout<<"A receita bruta é de: R$ "<<vetReceitaBruta[i]<<endl;
        cout<<"A receita líquida é de: R$ "<<vetLiquida[i]<<endl;
    }

    return 0;
}
