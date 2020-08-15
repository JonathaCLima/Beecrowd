# Basic Select
Your company is doing a survey of how many customers are registered in the states, however, lacked to raise the data of the state of the 'Rio Grande do Sul'.

Then, you must show the names of all customers whose state is 'RS'.

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
| name                      |
|:--------------------------|
| Pedro Augusto da Rocha    |
| Jane Ester                |
| Marcos Antônio dos Santos |