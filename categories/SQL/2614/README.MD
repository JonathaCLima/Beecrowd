# September Rentals
The video store is making its semi-annual report and needs your help. All you have to do is select the name of the clients and the date of rental, from the rentals made in September 2016.

## Schema
    customers
| Column  | Type    |
|:--------|:--------|
| id (PK) | numeric |
| name    | varchar |
| street  | varchar |
| city    | varchar |

    rentals
| Column            | Type           |
|:------------------|:---------------|
| id (PK)           | numeric        |
| rentals_date      | date (ISO/YMD) |
| id_customers (FK) | numeric        |

## Tables
    customers
| id |name|street|city|
|:---|:----------------------------|:-------------------------------|:--------------|
| 1  | Giovanna Goncalves Oliveira | Rua Mato Grosso                | Canoas        |
| 2  | Kauã Azevedo Ribeiro        | Travessa Ibiá                  | Uberlândia    |
| 3  | Rebeca Barbosa Santos       | Rua Observatório Meteorológico | Salvador      |
| 4  | Sarah Carvalho Correia      | Rua Antônio Carlos da Silva    | Apucarana     |
| 5  | João Almeida Lima           | Rua Rio Taiuva                 | Ponta Grossa  |
| 6  | Diogo Melo Dias             | Rua Duzentos e Cinqüenta       | Várzea Grande |

    rentals
| id | rentals_date | id_customers |
|:---|:-------------|:-------------|
| 1  | 2016-09-10   | 3            |
| 2  | 2016-02-09   | 1            |
| 3  | 2016-02-08   | 4            |
| 4  | 2015-02-09   | 2            |
| 5  | 2016-02-03   | 6            |
| 6  | 2016-04-04   | 4            |

## Output Sample
| name                  | rentals_date |
|:----------------------|:-------------|
| Rebeca Barbosa Santos | 2016-09-10   |