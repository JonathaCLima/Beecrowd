# Amounts Between 10 and 20
When it comes to delivering the report on how many products the company has in stock, a part of the report has become corrupted, so the stock keeper asked for help, he wants you to display the following data for him.

Display the name of products whose amount are between 10 and 20 and whose name of the supplier starts with the letter 'P'.

## Schema
    providers
| Column  | Type                    |
|:--------|:------------------------|
| id (PK) | numeric                 |
| name    | character varying (255) |
| street  | character varying (255) |
| city    | character varying (255) |
| state   | char (2)                |

    products
| Column            | Type                    |
|:------------------|:------------------------|
| id (PK)           | numeric                 |
| name              | character varying (255) |
| amount            | numeric                 |
| price             | numeric                 |
| id_providers (FK) | numeric                 |

## Tables
    providers
| id | name               | street                        | city           | state |
|:---|:-------------------|:------------------------------|:---------------|:------|
| 1  | Ajax SA            | Rua Presidente Castelo Branco | Porto Alegre   | RS    |
| 2  | Sansul SA          | Av Brasil                     | Rio de Janeiro | RJ    |
| 3  | Pr Sheppard Chairs | Rua do Moinho                 | Santa Maria    | RS    |
| 4  | Elon Electro       | Rua Apolo                     | São Paulo      | SP    |
| 5  | Mike Electro       | Rua Pedro da Cunha            | Curitiba       | PR    |

    products
| id | name            | amount | price   | id_providers |
|:---|:----------------|:-------|:--------|:-------------|
| 1  | Blue Chair      | 30     | 300.00  | 5            |
| 2  | Red Chair       | 50     | 2150.00 | 2            |
| 3  | Disney Wardrobe | 400    | 829.50  | 4            |
| 4  | Executive Chair | 17     | 9.90    | 3            |
| 5  | Solar Panel     | 30     | 3000.25 | 4            |

## Output Sample
| name            |
|:----------------|
| Executive Chair |