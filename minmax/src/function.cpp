#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
   int min = V[0], max = V[0];
   int pos_min = 0, pos_max = 0;
   
   if (n == 0){
     return {-1, -1};
   }

    for(int i = 0; i<n; i++){
      if(V[i] < min){
        min = V[i];
        pos_min = i;
      }
      else if(V[i] >= max){
        max = V[i];
        pos_max = i;
      }
    }
   
    return { pos_min, pos_max };
}
