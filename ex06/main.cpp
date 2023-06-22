#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float matT[4][7], vetMedia[4], vetTmax[4], vetTmin[4], maior, menor, somaT=0.0, maxT, minT;
    int i, j, qteMaior25 = 0, qteMenor25 = 0, matD[4][7], dia = 1, diaMaior = 1, diaMenor = 1;

    //Lendo a matriz
    for (i=0; i<4; i++){
        for (j=0; j<7; j++){
            do{
                cout << "Digite o valor ("<<i+1<<","<<j+1<<") da Tº no dia "<<dia<<": ";
                cin >> matT[i][j];
                if (matT[i][j]<-60||matT[i][j]>50) cout <<"Valor inválido. Digite novamente!";
            }while(matT[i][j]<-60||matT[i][j]>50);
            matD[i][j] = dia;
            dia++;
        }
    }


    //verificando o dia com > e < temperatura;
    maior = matT[0][0];
    menor = matT[0][0];
    for (i=0; i<4; i++){
        for (j=0; j<7; j++){
            if (matT[i][j]>maior){
                diaMaior = matD[i][j];
                maior = matT[i][j];
            }
            else{
                if (matT[i][j]< menor){
                    diaMenor = matD[i][j];
                    menor = matT[i][j];
                }
            }
        }
    }

    //dias com Tº acima/abaixo 25º
    for (i=0; i<4; i++){
        for (j=0; j<7; j++){
            if (matT[i][j]>25) qteMaior25++;
            else if (matT[i][j]<25) qteMenor25++;
        }
    }

        //temperatura por semana
    for (i=0; i<4; i++){
        maxT = matT[i][0];
        minT = matT[i][0];
        somaT = 0.0;
        for (j=0; j<7; j++){
            somaT += matT[i][j];
            if(matT[i][j]>maxT) maxT = matT[i][j];
            else if (matT[i][j]<minT) minT = matT[i][j];
        }
        vetMedia[i] = somaT/7;
        vetTmax[i] = maxT;
        vetTmin[i] = minT;
    }

    cout << endl<< "O dia " <<diaMenor<<" foi o mais frio com a menor Tº "<<menor<<"ºC." << endl;
    cout << endl<< "O dia " <<diaMaior<<" foi o maios quente com a maior Tº "<<maior<<"ºC." << endl;
    cout << endl<< "Foram " <<qteMaior25<<" dias com a T° maior que 25°C." << endl;
    cout << endl<< "Foram " <<qteMenor25<<" dias com a T° menor que 25°C." << endl;

    for (i=0; i<4; i++){
        cout<<endl<<"Semana "<<i+1<<": "<<endl;
        cout<<"A temperatura média foi de :"<<vetMedia[i]<<"°C."<<endl;
        cout<<"A temperatura máxima foi de :"<<vetTmax[i]<<"°C."<<endl;
        cout<<"A temperatura mínima foi de :"<<vetTmin[i]<<"°C."<<endl;
    }
    return 0;
}
