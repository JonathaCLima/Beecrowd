# The Actors Silva
After actors win big awards and recognition in the film world, the demand for films in which they participate increases. That's why we want to know which films by the Silva brothers we have in our catalogue.

To do this, select the code and name of the films in which the actors 'Marcelo Silva' or 'Miguel Silva' acted and the movie genre is 'Action'.

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

    actors
| Column  | Type    |
|:--------|:--------|
| id (PK) | integer |
| name    | varchar |

    movies_actors
| Column         | Type    |
|:---------------|:--------|
| id_movies (FK) | numeric |
| id_actors (FK) | numeric |

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

    actors
| id | name                     |
|:---|:-------------------------|
| 1  | Brad Antonio             |
| 2  | Marcelo Silva            |
| 3  | Miguel Silva             |
| 4  | Drake Frost              |
| 5  | Rodrigo Juares Rodriguez |

    movies_actors
| id_movies | id_actors |
|:----------|:----------|
| 1         | 1         |
| 2         | 3         |
| 2         | 2         |
| 4         | 1         |
| 5         | 2         |

## Output Sample
| id | name                         |
|:---|:-----------------------------|
| 2  | The Battle of the Dark River |