O sistema a ser desenvolvido possibilitará operações designadas pela sigla CRUD (Create, Read, Update, Delete). 
O sistema visa facilitar o planejamento de viagens.

Para usar o sistema, o viajante deve criar uma conta. Após ser autenticado, 
o viajante tem acesso aos seguintes serviços: criar, ler, atualizar, e excluir viagem; criar, ler, atualizar, e excluir destino; criar, ler,
atualizar, e excluir atividade; criar, ler, atualizar, e excluir hospedagem.

 A atualização de um registro (viagem, destino,
atividade ou hospedagem) não possibilitar atualizar dado que identifica o registro (chave primária). 

O sistema deve também prover os seguintes serviços: consultar custo de viagem; listar viagens associadas a viajante, listar destinos associados a viagem, listar atividades associadas a destino e listar hospedagens associadas a destino. 

Ao apresentar uma listagem, o sistema deve ser apresentar código e nome de cada registro integrante da listagem.

O sistema deve assegurar as seguintes regras: não pode ser excluído registro se existir registro associado a ele; data de atividade deve estar no intervalo definido pelas datas de início e término do destino associado. 
O sistema deve também assegurar as regras de negócio representadas no seguinte