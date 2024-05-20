LOAD DATA LOCAL INFILE 'C:/path/to/dataset1.csv'
INTO TABLE table1
FIELDS TERMINATED BY ','
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;
LOAD DATA LOCAL INFILE 'C:/path/to/dataset2.csv'
INTO TABLE table2
FIELDS TERMINATED BY ','
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;

INSERT INTO new_table
SELECT * FROM table1
UNION ALL
SELECT * FROM table2;