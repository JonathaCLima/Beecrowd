# Products by Categories
As usual the sales industry is doing an analysis of how many products we have in stock, and you can help them.

Then your job will display the name and amount of products of each category.

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
| id | name               | amount | price  | id_categories |
|:---|:-------------------|:-------|:-------|---------------|
| 1  | Two-doors wardrobe | 100    | 800    | 1             |
| 2  | Dining table       | 1000   | 560    | 3             |
| 3  | Towel holder       | 10000  | 25.50  | 4             |
| 4  | Computer desk      | 350    | 320.50 | 2             |
| 5  | Chair              | 3000   | 210.64 | 4             |
| 6  | Single bed         | 750    | 460    | 1             |

    categories
| id | name         |
|:---|:-------------|
| 1  | wood         |
| 2  | luxury       |
| 3  | vintage      |
| 4  | modern       |
| 5  | super luxury |

## Output Sample
| name    | sum   |
|:--------|:------|
| luxury  | 350   |
| modern  | 13000 |
| wood    | 850   |
| vintage | 1000  |