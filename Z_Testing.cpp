-- Split data into columns and insert into a new table
CREATE TABLE IF NOT EXISTS movie_info (
    ReleasedYear INT,
    MovieTitle STRING
);

INSERT INTO TABLE movie_info
SELECT
    CAST(SPLIT(line, ',')[1] AS INT) AS ReleasedYear,
    SPLIT(line, ',')[0] AS MovieTitle
FROM movie_data;
