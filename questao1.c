/* 
Ele acessa o primeiro elemento do vetor e faz o teste com os outros elementos. Somado o primeiro elemento com cada um dos
outros elementos para ver se alcança o valor do alvo. Caso o valor não seja encontrado, ele passa para o próximo elemento e refaz o testeaté que o valor do alvo
seja encontrado.
Recebe como parâmetro um vetor, n é o tamanho do vetor, Al é o alvo, a e b são variáveis onde os serão colocados os índices correspondentes
*/
#include<stdio.h> 
#include<stdlib.h>
void acha(int *V, int n, int Al, int *a, int *b){
int i, j;
 for(i = 0; i < n; i++){
  for(j = 0; j < n; j++){
   if(((V[i] + V[j])==Al) &&(i != j)){
     *a = i;
     *b = j;
      break;
    }
   }
  }
 }

int main(void){
int a, b;
int Al = 9;
int V[4]={2,7,11,15};
acha(V,4,Al,&a,&b);
printf("%d\n%d\n",a,b);
return 0;
}
