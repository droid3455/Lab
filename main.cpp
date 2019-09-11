#include <iostream>
using namespace std;

void Separar5Cifras(int num){
        cout<<num/10000<<'\t';
        num=num%10000;
        cout<<num/1000<<'\t';
        num=num%1000;
        cout<<num/100<<'\t';
        num=num%100;
        cout<<num/10<<'\t';
        num=num%10;
        cout<<num;

}
int contarDigitos(int num2){
        int cont=0;
        while(num2!=0){
            num2=num2/10;
            cont++;
        }

        return cont;
}

bool PalindromoDe5(int num3){
        int a,b,c,d,e;
        a= num3/10000;
        b= num3/1000;
        b%=10;
        c=num3%1000;
        c|=100;
        d=num3%100;
        d|=10;
        e=num3%10;
        if(a==e & b==d)
            return true;
        else
            return false;
}

int calcularFbo(int num){
    int f0=0, f1=1, c=0, rpta=0;
    if(num==0 ||num==1){
        return 1;
    }
    else{
        while(++c<num){
            rpta=f0+f1;
            f0=f1;
            f1=rpta;
        }
        return rpta;
    }

}

/*
bool esNumero(char c)
bool esLetra(char c)
*/
int main(){
    /*
    int num;
    cin>>num;
    Separar5Cifras(num)
    */

    /*
    int contarnumero = contarDigitos(765432);
    cout<< contarnumero<< endl;
    return 0;

    cout<<PalindromoDe5(12121);
    */
    int calculate = calcularFbo(10);
 cout<< calculate << endl;
}
