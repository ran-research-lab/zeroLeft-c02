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

int main() {
	vector<int> A {10,20,0,30,40,0,0};
    vector<int> B {0,0,10,0,0,20,30,0,40,0,0};
    vector<int> C {0,0,0,0,0};
    vector<int> D {1,2,10,20};

    moveZeroesLeft_v01(A);
    expect((A == vector<int>{10,20,30,40}));

    moveZeroesLeft_v01(B);
    expect((B == vector<int>{10,20,30,40}));

    moveZeroesLeft_v01(C);
    expect(C.size() == 0);

    moveZeroesLeft_v01(D);
    expect((D == vector<int>{1,2,10,20}));


    vector<int> W {10,20,0,30,40,0,0};
    vector<int> X {0,0,10,0,0,20,30,0,40,0,0};
    vector<int> Y {0,0,0,0,0};
    vector<int> Z {1,2,10,20};


    cout << "FIN! (si no ves Assertions arriba, ha pasado todas las pruebas)\n";


}
