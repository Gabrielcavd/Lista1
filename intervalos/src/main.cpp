/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void){
  int x;
  float cont0_24 = 0, cont25_49 = 0, cont50_74 = 0, cont75_99 = 0, cont_fora = 0, cont_total = 0;  
  
  while( cin >> std::ws >> x) {
    cont_total++;
    if(x >= 0 && x < 25){
      cont0_24++;
    }else if(x >= 25 && x < 50){
      cont25_49++;
    }else if(x >= 50 && x < 75){
      cont50_74++;
    }else if(x >= 75 && x < 100){
      cont75_99++;
    }else{
      cont_fora++;
    }
  }
  std::cout << std::setprecision(4) << (cont0_24/cont_total)*100 << std::endl;
  std::cout << std::setprecision(4) << (cont25_49/cont_total)*100 << std::endl;
  std::cout << std::setprecision(4) << (cont50_74/cont_total)*100 << std::endl;
  std::cout << std::setprecision(4) << (cont75_99/cont_total)*100 << std::endl;
  std::cout << std::setprecision(4) << (cont_fora/cont_total)*100 << std::endl;

  return 0;
}
