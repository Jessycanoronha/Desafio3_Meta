/*
Usando a tabela ASCII, notamos que a diferença entre '[' e ']'
é igual a 2, da mesma forma que para '{' e '}' . E a diferença para'(' e ')' é 1.
Dessa forma, só é preciso percorrer a string a partir das extremidades. Se a diferença entre as 
extremidades for no caso do colchetes e das chaves 2, ok, no caso dos parênteses 1. Qualquer outro caso a string
não estaria balanceada. O número 91 na tabela ASCII representa o '[' e ']' é representado por 93.
As '{' é representado pelo número 123 e as '}' representada pelo número 125.
Os'(' é representado pelo número 40 e as ')' representada pelo número 42.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void balanceada(char *s){
int i;
int n;
n = strlen(s);

for(i =0; i < n; i++,n--){
  if(((s[i]==91) || (s[i]==123)) && ((s[n-1] - s[i])!=2)){
     printf("%s Não \n", s);
     exit(0);}
    else 
    if(s[i]==40 && ((s[n-1] - s[i])!=1)){
         printf("%s Não \n", s);
          exit(0);}
          else 
          if(s[i]!=91 && s[i]!=123 && s[i]!=40){
             printf("%s Não \n", s);
              exit(0);}
  }
printf("%s Sim \n", s);
}
int main(void){
 char s[] = "{[()]}";
 balanceada(s);
return 0;
}
