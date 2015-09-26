/* 
 * File:   main.cpp
 * Author: Benet
 *
 * Created on 26 de septiembre de 2015, 19:31
 */

#include <iostream>

using namespace std;

/*
 * 
 */



//Declaració de metodes 

int writeMenu();
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();


int main() {

    int op=-1;
    
    do{ 
        op=writeMenu();
       
        switch (op){
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;
            case 10:
                ex10();
                break;
            case 11:
                cout << "Bye!";
                break;
            default:
                cout <<"Mai entrarà aqui pero per se les mosques"<<endl;
                //no entrarà mai pq controlem el valor de op en el metode writeMenu
                break;
        }
        
    }while(op!=11);   
    
    return 0;
}


/*
 Metode que escriu per pantalla el menu del programa
 */
int writeMenu(){
    
    int op=-1;
    
    cout << "1-Exercici 1"<< endl;
    cout << "2-Exercici 2"<< endl;
    cout << "3-Exercici 3"<< endl;
    cout << "4-Exercici 4"<< endl;
    cout << "5-Exercici 5"<< endl;
    cout << "6-Exercici 6"<< endl;
    cout << "7-Exercici 7"<< endl;
    cout << "8-Exercici 8"<< endl;
    cout << "9-Exercici 9"<< endl;
    cout << "10-Exercici 10"<< endl;
    cout << "11-Sortir"<<endl;;
    cout << "Selecciona el programa que vols executar => ";
    
    cin >> op;
    
    if(op>11 || op<1){
        cout <<"El valor a introduir va del 1 al 10.";
        writeMenu();
    }
    
    return op;
}
/*
Exercici 1
Fer un programa que calculi i mostri la mitjana de tres notes d'un alumne, introduïdes
per teclat.
*/
void ex1(){
    
    float n1, n2, n3, mitjana;
    
    cout << "Nota 1 => ";
    cin >> n1;
    cout << "Nota 2 => ";
    cin >> n2;
    cout << "Nota 3 => ";
    cin >> n3;
    
    mitjana = (n1+n2+n3)/3;
    
    cout << "Mitjana obtinguda => " << mitjana << endl;
    
}
/*
Exercici 2
Fer un programa que calculi el preu d'un viatge (introduït per teclat) sabent que aquest
es paga per km i cada km es paga a 2 €.
*/
#define PKM 2
void ex2(){
    int km;
    cout << "KM realitzats => ";
    cin >> km;
    cout << "Tatal: " << (km*PKM) << "€" <<endl;
}
/*
Exercici 3
Fer un programa que mostri quants euros són una quantitat en dòlars donada per teclat.
Utilitzeu el canvi 1 dòlar = 0.892439 euros.
 */
#define CANVI 0.892439
void ex3(){
    float eu;
    cout << "Valor en € => ";
    cin >> eu;
    cout << "Valor en $: " << (eu/CANVI) << endl;
}
/*
Exercici 4
Fer un programa que mostri el nou salari d'un empleat si va obtenir un increment del 8%
sobre el salari (donat per teclat).
 */
#define INCREMENT 1.08
void ex4(){
    float salari;
    cout << "Salari actual => ";
    cin >> salari;
    cout << "Salari amb el increment => " << (salari*INCREMENT) << "€" << endl;
}
/*
Exercici 5
Donada una quantitat en bitllets de 5,10 i 20 (introduïdes per teclat) fer un programa que
mostri l'import total.
 */
#define B5 5 
#define B10 10
#define B20 20
void ex5(){
    int b5, b10, b20, total;
    cout << "Billets de 5 => ";
    cin >> b5;
    cout << "Billets de 10 => ";
    cin >> b10;           
    cout << "Billets de 20 => ";
    cin >> b20;
    total=(b5*B5)+(b10*B10)+(b20*B20);
    cout << "Total => " << total <<"€" << endl;
}
/*
Exercici 6
Fer un programa que converteixi una distància introduïda en metres a quilòmetres.
 */
#define M_to_K 1000
void ex6(){
    float m, k;
    cout << "Metres => ";
    cin >> m;
    k=m/M_to_K;
    cout << "Kilometres => " << k << "KM" <<endl;
}
/*
Exercici 7
Fer un programa que converteixi una temperatura de graus Celsius a Fahrenheit.
 */
//°F= °C x 1.8 + 32 
#define A 1.8
#define B 32
void ex7(){
    float c,f;
    cout << "Cº => ";
    cin >> c;
    f=(c*A)+B;
    cout << "Fº => " << f << endl;
}
/*
Exercici 8
Donats dos nombres fer un programa que calculi la suma, la resta, la multiplicació i
divisió.
 */
void ex8(){
    float a, b; 
    cout << "Nombre A => ";
    cin >> a;
    cout << "Nombre B => ";
    cin >> b;
    
    cout << "Suma => " << (a+b) <<endl;
    cout << "Resta => " << (a-b) <<endl;
    cout << "Multiplicació => " << (a*b) <<endl;
    cout << "Divisió => " << (a/b) <<endl;
}
/*
 Exercici 9
Fer un programa que mostri l'àrea d'un quadrat.
 */
void ex9(){
    float a;
    cout << "Valor de a => ";
    cin >> a;
    cout << "Àrea => " << (a*a) << endl;
}
/*
 Exercici 10
Fer un programa que mostri l'àrea d'un triangle.
 */
//Area = ½ × b × a
void ex10(){
    float a , b;
    cout << "Alçada => ";
    cin >> a;
    cout << "Base => ";
    cin >> b;
    cout << "Àrea del triangle => " << (0.5*a*b) << endl;;
    
}