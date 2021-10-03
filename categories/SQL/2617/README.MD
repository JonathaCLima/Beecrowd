# Provider Ajax SA
The financial sector has encountered some problems in the delivery of one of our providers, the delivery of the products does not match the invoice.

Your job is to display the name of the products and the name of the provider, for the products supplied by the provider 'Ajax SA'.

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
| id | name         | street                    | city           | state |
|:---|:-------------|:--------------------------|:---------------|:------|
| 1  | Ajax SA      | Presidente Castelo Branco | Porto Alegre   | RS    |
| 2  | Sansul SA    | Av Brasil                 | Rio de Janeiro | RJ    |
| 3  | South Chairs | Av Moinho                 | Santa Maria    | RS    |
| 4  | Elon Electro | Apolo                     | São Paulo      | SP    |
| 5  | Mike Electro | Pedro da Cunha            | Curitiba       | PR    |

    products
| id | name            | amount | value   | id_providers |
|:---|:----------------|:-------|:--------|:-------------|
| 1  | Blue Chair      | 30     | 300.00  | 5            |
| 2  | Red Chair       | 50     | 2150.00 | 1            |
| 3  | Disney Wardrobe | 400    | 829.50  | 4            |
| 4  | Blue Toaster    | 20     | 9.90    | 3            |
| 5  | Solar Panel     | 30     | 3000.25 | 4            |

## Output Sample
| name      | name    |
|:----------|:--------|
| Red Chair | Ajax SA | 