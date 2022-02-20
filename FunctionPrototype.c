//É como se fosse um jeito de nao deixar a função passar sem todos os argumentos por exemplo:

//isso faz a função oi() sempre retornar o nome e a idade mesmo sem as instruções do que fazer ainda!
void oi(char nome[], int age)

//Isso acontece porque muitos compiladores nao checam pra ver se todos os paremetros foram
//colocados, resultando em comportamentos estranhos (numeros aleatorios e etc.)

// com a função prototype ele simplesmente da erro.