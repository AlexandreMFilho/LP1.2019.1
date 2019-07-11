Exercício U5.1 - Folha de Pagamento como um join de tabelas
Disponível a partir de: quarta, 20 Mai 2015, 19:10
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U5.1 - Folha de Pagamento como um join de tabelas
Implemente um programa na linguagem C que processe a folha de pagamento de uma firma com dez funcionários. Os funcionários trabalham por demanda. A cada mês o salário precisa ser recalculado em função das horas efetivamente trabalhadas.
Há um arquivo texto <Funcionarios.txt> sobre os funcionários contendo os campos nome, matricula, endereço, CPF, cod_banco, agência, conta, valor_hora. Todos os campos do arquivo de funcionários exceto valor_hora são alfanuméricos, enquanto que valor_hora é um número real positivo. Os campos são separados por um carcter de espaço. O número de caracteres por campo alfanumérico é respectivamente 50, 12, 65, 11, 5, 8.
Todo mês, a gerência produz um arquivo com a matrícula e o número de horas trabalhadas, por exemplo no mês corrente foi gerado <Novembro.txt>. O formato de cada linha destes arquivo é o seguinte: matricula com 12 caracteres + um caracter barra (virada para a direita) + um campo numérico inteiro positivo.  
A folha de pagamento gera um arquivo texto na tela com os seguintes campos o Nome, o CPF, cod_banco, agência, conta e o valor a ser pago para cada um dos funcionários. Cada linha da sáida diz respeito a um funcionario, os campos são separados pelo caracter '|'. A folha de pagamento deve ser impressa em ordem alfabética pelo nome de funcionário

Atenção para as seguinte restrição: 
Os dados dos arquivos ao serem carregados em memória devem ser armazenados em arrays de struct.
