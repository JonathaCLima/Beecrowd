# Action Movies
A video store contractor hired her services to catalog her movies. They need you to select the code and the name of the movies whose description of the genre is 'Action'.

## Schema
    movies
| Column         | Type    |
|:---------------|:--------|
| id (PK)        | numeric |
| name           | varchar |
| id_genres (FK) | numeric |

    genres
| Column      | Type    |
|:------------|:--------|
| id (PK)     | numeric |
| description | varchar |

## Tables
    movies
| id | name                         | id_genres |
|:---|:-----------------------------|:----------|
| 1  | Batman                       | 3         |
| 2  | The Battle of the Dark River | 3         |
| 3  | White Duck                   | 1         |
| 4  | Breaking Barriers            | 4         |
| 5  | The Two Hours                | 2         |

    genres
| id | description |
|:---|:------------|
| 1  | Animation   |
| 2  | Horror      |
| 3  | Action      |
| 4  | Drama       |
| 5  | Comedy      |

## Output Sample
| id | name                         |
|:---|:-----------------------------|
| 1  | Batman                       |
| 2  | The Battle of the Dark River |