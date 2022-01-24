/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void ){
  int n, m;
  while( std::cin >> std::ws >> m >> n){
    int soma = m;
    if(n > 0){
      for(int i = 1; i<n; i++){
        m++;
        soma += m;
      }
    }
    else if (n < 0){
      for(int i = 1; i<n*-1; i++){
        m--;
        soma += m;
      }
    }
    std::cout << soma << endl;
  }

  return 0;
}
