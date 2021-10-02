# No Rental
The video store company intends to do a promotion for customers who have not yet done any rental.

Your job is to deliver us the ID and the name of the customers who have not done any rental. Sort the output by ID.

## Schema
    customers
| Column  | Type    |
|:--------|:--------|
| id (PK) | numeric |
| name    | varchar |
| street  | varchar |
| city    | varchar |

    locations
| Column            | Type           |
|:------------------|:---------------|
| id (PK)           | numeric        |
| locations_date    | date (ISO/YMD) |
| id_customers (FK) | numeric        |

## Tables
    customers
| id | name                             | street                         | city          |
|:---|:---------------------------------|:-------------------------------|:--------------|
| 1  | Giovanna Goncalves Oliveira      | Rua Mato Grosso                | Canoas        |
| 2  | Kauã Azevedo Ribeiro             | Travessa Ibiá                  | Uberlândia    |
| 3  | Rebeca Barbosa Santos            | Rua Observatório Meteorológico | Salvador      |
| 4  | Sarah Carvalho Correia           | Rua Antônio Carlos da Silva    | Apucarana     |
| 5  | João Almeida Lima                | Rua Rio Taiuva                 | Ponta Grossa  |
| 6  | Diogo Melo Dias                  | Rua Duzentos e Cinqüenta       | Várzea Grande |

    locations
| id | locations_date | id_customers |
|:---|:---------------|:-------------|
| 1  | 2016-10-09     | 3            |
| 2  | 2016-09-02     | 1            |
| 3  | 2016-08-02     | 4            |
| 4  | 2016-09-02     | 2            |
| 5  | 2016-03-02     | 6            |
| 6  | 2016-04-04     | 4            |

## Output Sample
| id | name              |
|:---|:------------------|
| 5  | João Almeida Lima |