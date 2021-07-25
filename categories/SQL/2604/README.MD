# Under 10 or Greater Than 100
The financial sector of the company needs a report that shows the ID and the name of the products whose price is less than 10 or greater than 100.

## Schema
    products
| Column       | Type    |
|:-------------|:--------|
| id (PK)      | numeric |
| name         | varchar |
| amount       | numeric |
| price        | numeric |

## Tables
    products
| id | name              | amount | price  |
|:---|:------------------|:-------|:-------|
| 1  | Two-door wardrobe | 100    | 80     |
| 2  | Dining table      | 1000   | 560    |
| 3  | Towel holder      | 10000  | 5.50   |
| 4  | Computer desk     | 350    | 100    |
| 5  | Chair             | 3000   | 210.64 |
| 6  | Single bed        | 750    | 99     |

## Output Sample
| id | name         |
|:---|:-------------|
| 2  | Dining table |
| 3  | Towel holder |
| 5  | Chair        |