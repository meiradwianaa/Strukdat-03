/*
Author			: Meira Dwiana Anjani
NPM				: 140810180015
Deskripsi		: Program Diagonal
Tahun			: 2019
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

typedef struct{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s){
    cout << "Input Panjang    : ";cin >> s->panjang;
    cout << "Input Lebar      : ";cin >> s->lebar;

}

float keliling(segiempat s){
    return(2*(s.panjang+s.lebar));
}

float luas(segiempat s){
    return(s.panjang*s.lebar);
}

float diagonal(segiempat s){
    return(sqrt(s.panjang*s.panjang+s.lebar*s.lebar));
}

void print(segiempat s){
	cout << endl;
	cout << "Panjang\t\t: "<<s.panjang<<endl;
	cout << "Lebar\t\t: "<<s.lebar<<endl;
    cout << "Keliling\t: "<<keliling(s)<<endl;
    cout << "Luas\t\t: "<<luas(s)<<endl;
    cout << "Diagonal\t: "<<diagonal(s)<<endl;
}
int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
    return 0;
}
