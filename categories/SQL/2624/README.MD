# Number of Cities per Customers
The company board asked you for a simple report on how many cities the company has already reached.

To do this you must display the number of distinct cities in the customers table.

## Schema
    customers
| Column       | Type                    |
|:-------------|:------------------------|
| id (PK)      | numeric                 |
| name         | character varying (255) |
| street       | character varying (255) |
| city         | character varying (255) |
| state        | char (2)                |
| credit_limit | numeric                 | 

## Tables
    customers
| id | name                                    | street                                | city          | state | credit_limit |
|:---|:----------------------------------------|:--------------------------------------|:--------------|:------|:-------------|
| 1  | Nicolas Diogo Cardoso                   | Acesso Um                             | Porto Alegre  | RS    | 475          |
| 2  | Cecília Olivia Rodrigues                | Rua Sizuka Usuy                       | Cianorte      | PR    | 3170         |
| 3  | Augusto Fernando Carlos Eduardo Cardoso | Rua Baldomiro Koerich                 | Palhoça       | SC    | 1067         |
| 4  | Nicolas Diogo Cardoso                   | Acesso Um                             | Porto Alegre  | RS    | 475          |
| 5  | Sabrina Heloisa Gabriela Barros         | Rua Engenheiro Tito Marques Fernandes | Porto Alegre  | RS    | 4312         |
| 6  | Joaquim Diego Lorenzo Araújo            | Rua Vitorino                          | Novo Hamburgo | RS    | 2314         |

## Output Sample
| count |
|:------|
| 4     |