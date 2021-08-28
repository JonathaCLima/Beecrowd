# Providers' City in Alphabetical Order
Every month the company asks for a report from the cities that providers are registered. So, do a query that returns all the cities of the providers, but in alphabetical order.

OBS: You must not show repeated cities.

## Schema
    providers
| Column  | Type    |
|:------- |:--------|
| id (PK) | numeric |
| name    | varchar |
| street  | varchar |
| city    | varchar |
| state   | char    |

## Tables
    providers
| id | name             | street         | city           | state |
|:---|:-----------------|:---------------|:---------------|:------|
| 1  | Henrique         | Av Brasil      | Rio de Janeiro | RJ    |
| 2  | Marcelo Augusto  | Rua Imigrantes | Belo Horizonte | MG    |
| 3  | Caroline Silva   | Av São Paulo   | Salvador       | BA    |
| 4  | Guilerme Staff   | Rua Central    | Porto Alegre   | RS    |
| 5  | Isabela Moraes   | Av Juiz Grande | Curitiba       | PR    |
| 6  | Francisco Accerr | Av Paulista    | São Paulo      | SP    |

## Output Sample
| city           | 
|:---------------|
| Belo Horizonte | 
| Curitiba       | 
| Porto Alegre   |
| Rio de Janeiro | 
| Salvador       | 
| São Paulo      |