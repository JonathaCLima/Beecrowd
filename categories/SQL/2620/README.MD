# Orders in First Half
The company's financial audit is asking us for a report for the first half of 2016. Then display the customers name and order number for customers who placed orders in the first half of 2016.

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

    orders
| Column            | Type           |
|:------------------|:---------------|
| id (PK)           | numeric        |
| orders_date       | date (ISO/YMD) |
| id_customers (FK) | numeric        |

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

    orders
| id | orders_date | id_customers |
|:---|:------------|:-------------|
| 1  | 2016-05-13  | 3            |
| 2  | 2016-01-12  | 2            |
| 3  | 2016-04-18  | 5            |
| 4  | 2016-09-07  | 4            |
| 5  | 2016-02-13  | 6            |
| 6  | 2016-08-05  | 3            |

## Output Sample
| name                                    | id |
|:----------------------------------------|:---|
| Augusto Fernando Carlos Eduardo Cardoso | 1  |
| Cecília Olivia Rodrigues                | 2  |
| Sabrina Heloisa Gabriela Barros         | 3  |
| Joaquim Diego Lorenzo Araújo            | 5  | 