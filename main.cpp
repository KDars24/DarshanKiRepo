#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    srand(time(0)) ;
    int rollDie =(rand() % 6)+1 ;
    int rollDie2 =(rand() % 6)+1 ;
    cout<< rollDie << rollDie2 ;

    return 0;
    
}

    