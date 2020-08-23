# Customer Address
The company will make an event celebrating the 20th anniversary of the market, and for that we will make a great celebration in the city of Porto Alegre. We also invite all our customers who are enrolled in this city.

Your job is in having the names and addresses of customers who live in 'Porto Alegre', to deliver the invitations personally.

## Schema
    customers
| Column       | Type    |
|:-------------|:--------|
| id (PK)      | numeric |
| name         | varchar |
| street       | varchar |
| city         | varchar |
| state        | char    |
| credit_limit | number  |

## Tables
    customers
| id | name                      | street                   | city           | state | credit_limit |
|:---|:--------------------------|:-------------------------|:---------------|:------|:-------------|
| 1  | Pedro Augusto da Rocha    | Rua Pedro Carlos Hoffman | Porto Alegre   | RS    | 700,00       |
| 2  | Antonio Carlos Mamel      | Av. Pinheiros            | Belo Horizonte | MG    | 3500,50      |
| 3  | Luiza Augusta Mhor        | Rua Salto Grande         | Niteroi        | RJ    | 4000,00      |
| 4  | Jane Ester                | Av 7 de setembro         | Erechim        | RS    | 800,00       |
| 5  | Marcos Antônio dos Santos | Av Farrapos              | Porto Alegre   | RS    | 4250,25      |

## Output Sample
| name                      | street                   |
|:--------------------------|--------------------------|
| Pedro Augusto da Rocha    | Rua Pedro Carlos Hoffman |
| Marcos Antônio dos Santos | Av Farrapos              |