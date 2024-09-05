# Sistema de Cadastro de Cliente
Este é um sistema simples de cadastro e consulta de clientes implementado em C. O programa utiliza a biblioteca windows.h para manipulação de cursor e limpeza da tela, e a biblioteca conio.h para a leitura de entradas do teclado. O sistema permite ao usuário cadastrar informações de clientes e consultar os dados cadastrados.

Funcionalidades
Cadastro de Clientes

Idade: Deve ser um número inteiro maior ou igual a 18.
Salário: Deve ser um número de ponto flutuante maior ou igual a 2000.
Sexo: Deve ser 'M' (masculino) ou 'F' (feminino).
Permite cadastrar até 5 clientes.
Após o cadastro de um cliente, o usuário pode optar por cadastrar outro cliente.
Consulta de Clientes

Exibe a lista de todos os clientes cadastrados com suas informações (idade, salário e sexo).
Permite visualizar os dados diretamente na tela.
Como Usar
Compilação

Certifique-se de ter um compilador C compatível com a biblioteca windows.h e conio.h.
Compile o código usando o seu compilador C. Por exemplo, se estiver usando o gcc, o comando pode ser:
bash
Copiar código
gcc -o cadastro_clientes cadastro_clientes.c
Execução

Execute o programa gerado. Se estiver usando o terminal ou prompt de comando, navegue até o diretório onde o executável está localizado e execute:
bash
Copiar código
cadastro_clientes
Interação

Menu Principal:
1. Cadastrar: Para adicionar um novo cliente.
2. Consultar: Para visualizar a lista de clientes cadastrados.
3. Sair: Para encerrar o programa.
Dependências
Bibliotecas:
windows.h para manipulação de cursor e console.
conio.h para a leitura de entradas do teclado.
Observações
O programa utiliza funções específicas do Windows e pode não ser compatível com sistemas operacionais diferentes.
Certifique-se de que o console é grande o suficiente para exibir todas as informações sem truncamento.
Exemplo de Uso
Ao iniciar o programa, o usuário será apresentado a um menu principal. O usuário pode escolher entre cadastrar novos clientes, consultar os clientes cadastrados ou sair do programa. Durante o processo de cadastro, as informações do cliente são validadas e armazenadas, enquanto a consulta exibe as informações de todos os clientes já cadastrados.
