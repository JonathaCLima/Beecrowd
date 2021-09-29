# Cheap Movies
In the past the studio has made an event where several movies were on sale, we want to know what movies these were.

Your job to help us is to select the ID and name of movies whose price is less than 2.00.

## Schema
    movies
| Column         | Type    |
|:---------------|:--------|
| id (PK)        | numeric |
| name           | varchar |
| id_prices (FK) | numeric |

    prices
| Column    | Type    |
|:----------|:--------|
| id (PK)   | numeric |
| categorie | varchar |
| value     | numeric |

## Tables
    movies
| id | name                         | id_prices |
|:---|:-----------------------------|:----------|
| 1  | Batman                       | 3         |
| 2  | The Battle of the Dark River | 3         |
| 3  | White Duck                   | 5         |
| 4  | Breaking Barriers            | 4         |
| 5  | The Two Hours                | 2         |

    prices
| id | categorie   | value |
|:---|:------------|:------|
| 1  | Releases    | 3.50  |
| 2  | Bronze Seal | 2.00  |
| 3  | Silver Seal | 2.50  |
| 4  | Gold Seal   | 3.00  |
| 5  | Promotion   | 1.50  |

## Output Sample
| id | name       |
|:---|:-----------|
| 3  | White Duck |