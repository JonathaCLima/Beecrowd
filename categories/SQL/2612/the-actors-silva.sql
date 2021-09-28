CREATE TABLE genres (
    id numeric PRIMARY KEY,
    description varchar(50)
);

CREATE TABLE movies (
    id numeric PRIMARY KEY,
    name varchar(50),
    id_genres numeric REFERENCES genres (id)
);

CREATE TABLE actors (
    id numeric PRIMARY KEY,
    name varchar(50)
);

CREATE TABLE movies_actors (
    id_movies numeric REFERENCES movies (id),
    id_actors numeric REFERENCES actors (id)
);

INSERT INTO genres (id, description)
VALUES
    (1,    'Animation'),
    (2,    'Horror'),
    (3,    'Action'),
    (4,    'Drama'),
    (5,    'Comedy');

INSERT INTO movies (id, name, id_genres)
VALUES
    (1,    'Batman',                          3),
    (2,    'The Battle of the Dark River',    3),
    (3,    'White Duck',                      1),
    (4,    'Breaking Barriers',               4),
    (5,    'The Two Hours',                   2);
  
INSERT INTO actors (id, name)
VALUES
    (1,    'Brad Antonio'),
    (2,    'Marcelo Silva'),
    (3,    'Miguel Silva'),
    (4,    'Drake Frost'),
    (5,    'Rodrigo Juares Rodriguez');

INSERT INTO movies_actors (id_movies, id_actors)
VALUES
    (1,    1),
    (2,    3),
    (2,    2),
    (4,    1),
    (5,    2);

SELECT DISTINCT movies.id AS "id", movies.name AS "name"
FROM movies_actors, movies, actors, genres
WHERE (
	(genres.id = movies.id_genres) AND (genres.description = 'Action')
) AND (
	(actors.id = movies_actors.id_actors) AND (actors.name = 'Marcelo Silva' OR actors.name = 'Miguel Silva') AND (movies.id = movies_actors.id_movies)
)