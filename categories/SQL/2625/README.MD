# CPF Validation
Your company's communications managers want a report on the natural person customer data that is registered in the database. But the old report had a problem. customers CPF data came without validation.

So your job now is to select all the CPFs of all the customers, and apply a mask on the return of the data.

The CPF mask looks like: '000.000.000-00'.

## chema
    customers
| Column       | Type                    |
|:-------------|:------------------------|
| id (PK)      | numeric                 |
| name         | character varying (255) |
| street       | character varying (255) |
| city         | character varying (255) |
| state        | char (2)                |
| credit_limit | numeric                 |
    
    natural_person
| Column            | Type      |
|:------------------|:----------|
| id_customers (FK) | numeric   |
| cpf               | char (14) |

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

    natural_person
| id_customers | cpf         |
|:-------------|:------------|
| 1            | 26774287840 |
| 2            | 97918477200 |

## Output Sample
| CPF            |
|:---------------|
| 267.742.878-40 |
| 979.184.772-00 | 