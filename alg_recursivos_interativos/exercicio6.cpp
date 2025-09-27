#include <cstring>
#include <iostream>

using namespace std;

int palindromo(char str[], int inicio, int fim){
    if (inicio >= fim){
        return 1;
    }
    else{
        if(str[inicio] != str[fim]){
            return 0;
        }
        else{
            return palindromo(str, inicio + 1, fim - 1);

        }
    }
}

int main(){
    char string[50];

    cout << "Digite uma palavra para verificar se e um palindromo: ";
    cin >> string;

    if(palindromo(string, 0, strlen(string) -1 ) ==1){
        cout << "1";
    }
    else{
        cout << "0";
    }

    return 0;
}