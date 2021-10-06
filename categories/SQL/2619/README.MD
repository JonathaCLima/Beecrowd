# Super Luxury
Our company is looking to make a new contract for the supply of new super luxury products, and for this we need some data of our products.

Your job is to display the name of the products, the name of the providers and the price, for the products whose price is greater than 1000 and its category is' Super Luxury.

## Schema
    products
| Column             | Type                    |
|:-------------------|:------------------------|
| id (PK)            | numeric                 |
| name               | character varying (255) |
| amount             | numeric                 |
| price              | numeric                 |
| id_providers (FK)  | numeric                 |
| id_categories (FK) | numeric                 |

    providers
| Column  | Type                    |
|:--------|:------------------------|
| id (PK) | numeric                 |
| name    | character varying (255) |
| street  | character varying (255) |
| city    | character varying (255) |
| state   | char (2)                |

    categories
| Column  | Type                    |
|:--------|:------------------------|
| id (PK) | numeric                 |
| name    | character varying (255) |

## Tables
    products
| id | name            | amount | price   | id_providers | id_categories |
|:---|:----------------|:-------|:--------|:-------------|:--------------|
| 1  | Blue Chair      | 30     | 300.00  | 5            | 5             |
| 2  | Red Chair       | 50     | 2150.00 | 2            | 1             |
| 3  | Disney Wardrobe | 400    | 829.50  | 4            | 1             |
| 4  | Blue Toaster    | 20     | 9.90    | 3            | 1             |
| 5  | TV              | 30     | 3000.25 | 2            | 2             |

    providers
| id | name         | street                        | city           | state |
|:---|:-------------|:------------------------------|:---------------|:------|
| 1  | Ajax SA      | Rua Presidente Castelo Branco | Porto Alegre   | RS    |
| 2  | Sansul SA    | Av Brasil                     | Rio de Janeiro | RJ    |
| 3  | South Chairs | Rua do Moinho                 | Santa Maria    | RS    |
| 4  | Elon Electro | Rua Apolo                     | São Paulo      | SP    |
| 5  | Mike electro | Rua Pedro da Cunha            | Curitiba       | PR    |

    categories
| id | name         |
|:---|:-------------|
| 1  | Super Luxury |
| 2  | Imported     |
| 3  | Tech         |
| 4  | Vintage      |
| 5  | Supreme      |

## Output Sample
| name      | name      | price   |
|:----------|:----------|:--------|
| Red Chair | Sansul SA | 2150.00 |