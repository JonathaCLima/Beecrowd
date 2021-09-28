CREATE TABLE genres (
    id numeric PRIMARY KEY,
    description varchar(50)
);

CREATE TABLE movies (
    id numeric PRIMARY KEY,
    name varchar(50),
    id_genres numeric REFERENCES genres (id)
);

INSERT INTO genres (id, description)
VALUES
    (1,    'Animation'),
    (2,    'Horror'),
    (3,    'Action'),
    (4,    'Drama'),
    (5,    'comedy');

INSERT INTO movies (id, name, id_genres)
VALUES
    (1,    'Batman',                          3),
    (2,    'The Battle of the Dark River',    3),
    (3,    'White duck',                      1),
    (4,    'Breaking Barriers',               4),
    (5,    'The Two Hours',                   2);

SELECT movies.id AS "id", movies.name AS "name"
FROM movies, genres
WHERE movies.id_genres = genres.id AND genres.description LIKE '%Action%'