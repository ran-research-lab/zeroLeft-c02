#include <vector>
#include <iostream>
#include <algorithm>

#define expect( chk )  \
    if (!(chk)) \
        printf("Assertion (%s) failed %s at line %d \n", #chk, __FILE__,__LINE__);

using namespace std;



// Dado un vector de enteros mover todos los ceros
// al principio del vector

void moveZeroesLeft_v01( vector<int> &A ) {

}


// Aquí vas a implementar otro algoritmo que resuelva el problema
// Hint: usa alguna de las otras ideas que surgieron en clase:
//   * ajustar alguno de los algoritmos de sorting
//   * borrar non-zeroes y push_back al final
//   * el cielo es el limite

void moveZeroesLeft_v02( vector<int> &A ) {

}


// Dado un vector, un valor, un indice from y otro to, devolver
// la cantidad de elementos entre los índices from y to que son
// iguales al valor.

int count(const vector<int> &A, int val, int from, int to) {
    int ctr = 0;
    for (int i = from; i <= to; i++) {
        if (A[i] == val) ctr++;
    }
    return ctr;
}


int main() {
	vector<int> A {10,20,0,30,40,0,0};
    vector<int> B {0,0,10,0,0,20,30,0,40,0,0};
    vector<int> C {0,0,0,0,0};
    vector<int> D {1,2,10,20};

    moveZeroesLeft_v01(A);
    // contar a ver si los tres ceros están al principio
    expect(count(A,0,0,2) ==3);
    // contar a ver si los tres ceros no están al final
    expect(count(A,0,3,6) ==0);
    // contar a ver si los hay un 10 en los elementos con indices del 3 al 6
    expect(count(A,10,3,6)==1);
    // contar a ver si los hay un 20 en los elementos con indices del 3 al 6
    expect(count(A,20,3,6)==1);

    moveZeroesLeft_v01(B);
    // contar a ver si los tres ceros están al principio
    expect(count(B,0,0,6) == 7);
    expect(count(B,0,7,10) == 0);

    moveZeroesLeft_v01(C);
    expect((C == vector<int>{0,0,0,0,0}));

    moveZeroesLeft_v01(D);
    expect((D == vector<int>{1,2,10,20}));


    vector<int> W {10,20,0,30,40,0,0};
    vector<int> X {0,0,10,0,0,20,30,0,40,0,0};
    vector<int> Y {0,0,0,0,0};
    vector<int> Z {1,2,10,20};


    cout << "FIN! (si no ves Assertions arriba, ha pasado todas las pruebas)\n";

}
