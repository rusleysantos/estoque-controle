# Controle de Estoque
Tarefa desenvolvida para o curso de Bacharel em Sistemas de Informação na disciplina introdução a desenvolvimento web.

# Linguagem
C

# Mini Mundo 

Problema: Uma empresa fará o controle do seu estoque usando um software desenvolvido por você, especialmente para este fim. Ela trabalha com no máximo 100 tipos de produtos, conhecendo para cada um deles: código, nome, quantidade em estoque, preço unitário de custo, quantidade vendida e o preço unitário de venda.
Como sugestão, pelo menos cinco vetores podem ser usados para o armazenamento dos dados dos produtos: um com os códigos (valores do tipo int), outro com os preços unitários de custo (valores do tipo float), outro com os preços unitários de venda (valores do tipo float), um quarto com as quantidades em estoque (valores do tipo int) e um quinto com as quantidades vendidas (valores do tipo int). Use um vetor de string para armazenar os nomes dos produtos (Converse com o professor sobre esse assunto e pesquise sobre strcpy.).
O software deve ter, no mínimo, as seguintes funcionalidades:

# MÓDULO GERENCIAMENTO DE ESTOQUE:
* Inclusão de cadastros. Ao cadastrar, o programa deve garantir que não ocorram dois produtos com o mesmo código, que o preço seja um valor maior que zero e que a quantidade seja maior ou igual a zero.
* Alteração de um cadastro específico. O cadastro a ser alterado deve ser identificado pelo código. Somente o preço e a quantidade podem ser alterados. Utilize o Método de Pesquisa Sequencial para localizar um código na lista de produtos.
* Exclusão de um cadastro específico. O cadastro a ser excluído deve ser identificado pelo código. Utilize o Método de Pesquisa Sequencial para localizar um código na lista de produtos.

# MÓDULO RELATÓRIO:
* Relatório contendo todos os produtos cadastrados, em ordem crescente de código. Utilize o Método da Bolha para ordenar a lista de produtos.
* Relatório com os dados de um produto específico, identificado pelo código. Utilize o Método de Pesquisa para localizar um código na lista de produtos.
* Relatório com todos os dados do produto e o cálculo do valor total de um determinado produto, o valor total de venda e o lucro obtido.
