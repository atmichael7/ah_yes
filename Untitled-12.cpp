#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;


string userInput;

string array[10][15];

int counter = 0;
int counter2 = 0;


void display(){
    for (int i=0; i<10; i++){
        for (int k=0; k<=14; k++){
            cout << array[i][k];
        }
        cout << endl;
    }
}




int main(){
    cout << "Enter inputs. When done use $ to proceed:\n";
    while (userInput != "$"){
        cin >> userInput;
        if (userInput == "$"){
            break;
        }
        else{
            for (int i=0; i<userInput.length(); i++){
                array[counter][i] = userInput[i];
            }
            counter++;
        }
    }
    display();


}