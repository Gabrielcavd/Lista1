#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int vector_int[5];
    int negativos = 0;
    for(int i = 0; i<5; i++){
    	std::cin >> vector_int[i];
    	if(vector_int[i] < 0)
    		negativos++;
    }
    std::cout << negativos <<  std::endl;

    return 0;
}
