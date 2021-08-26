# Categories
When the data were migrated to the database, there was a small misunderstanding on the DBA.

Your boss needs you to select the ID and the name of the products, whose categorie name start with 'super'.

## Schema
    products
| Column             | Type    |
|:-------------------|:--------|
| id (PK)            | numeric |
| name               | varchar |
| amount             | numeric |
| price              | numeric |
| id_categories (FK) | numeric |

    categories
| Column  | Type    |
|:--------|:--------|
| id (PK) | numeric |
| name    | varchar |

## Tables
    products
| id | name               | amount | price  | id_providers| id_categories |
|:---|:-------------------|:-------|:-------|:------------|:--------------|
| 1  | Lampshade          | 100    | 800    | 6           | 4             |
| 2  | Table for painting | 1000   | 560    | 1           | 9             |
| 3  | Notebook desk      | 10000  | 25.50  | 5           | 9             |
| 4  | Computer desk      | 350    | 320.50 | 4           | 6             |
| 5  | Chair              | 3000   | 210.64 | 3           | 9             |
| 6  | Home alarm         | 750    | 460    | 1           | 4             |

    categories
| id | name         |
|:---|:-------------|
| 1  | old stock    |
| 2  | new stock    |
| 3  | modern       |
| 4  | commercial   |
| 5  | recyclable   |
| 6  | executive    |
| 7  | superior     |
| 8  | wood         |
| 9  | super luxury |
| 10 | vintage      |

## Output Sample
| id | name               |
|:---|:-------------------|
| 2  | Table for painting |
| 3  | Notebook desk      |
| 5  | Chair              |