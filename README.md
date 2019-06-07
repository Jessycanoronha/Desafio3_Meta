# Desafio3_Meta

*Questão 1*
Ele acessa o primeiro elemento do vetor e faz o teste com os outros elementos. Somado o primeiro elemento com cada um dos
outros elementos para ver se alcança o valor do alvo. Caso o valor não seja encontrado, ele passa para o próximo elemento e refaz o testeaté que o valor do alvo
seja encontrado.
Recebe como parâmetro um vetor, n é o tamanho do vetor, Al é o alvo, a e b são variáveis onde os serão colocados os índices correspondentes

*Questão 2*
Usando a tabela ASCII, notamos que a diferença entre '[' e ']' é igual a 2, da mesma forma que para '{' e '}' . E a diferença para'(' e ')' é 1.
Dessa forma, só é preciso percorrer a string a partir das extremidades. Se a diferença entre as extremidades for no caso do colchetes e das chaves 2, ok, no caso dos parênteses 1. Qualquer outro caso a string não estaria balanceada. O número 91 na tabela ASCII representa o '[' e ']' é representado por 93.
As '{' é representado pelo número 123 e as '}' representada pelo número 125. Os'(' é representado pelo número 40 e as ')' representada pelo número 42.
