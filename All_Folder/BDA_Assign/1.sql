-- Simple Queries (Using Both Hive and Pig):
-- Query 1 - Load Data and Select Columns

-- Hive:
CREATE TABLE multi_gait_posture (
    column1 INT,
    column2 STRING,
    ...
);

LOAD DATA LOCAL INPATH 'C:\\Users\\Shubham\\Documents\\GitHub\\CPP_Programming\\All_Folder\\BDA_Assign\\cardio_train.csv' INTO TABLE multi_gait_posture;

SELECT column1, column2 FROM multi_gait_posture LIMIT 10;

-- Pig:
data = LOAD 'C:\\Users\\Shubham\\Documents\\GitHub\\CPP_Programming\\All_Folder\\BDA_Assign\\cardio_train.csv' USING PigStorage(',') AS (column1: int, column2: chararray, ...);
result = FOREACH (LIMIT data 10) GENERATE column1, column2;
DUMP result;

-- Query 2 - Filter Data

-- Hive:
SELECT * FROM multi_gait_posture WHERE column3 > 100;

-- Pig:
filtered_data = FILTER data BY column3 > 100;
DUMP filtered_data;

-- Query 3 - Group and Aggregate Data
-- Hive:
SELECT column1, AVG(column2) FROM multi_gait_posture GROUP BY column1;

-- Pig:
grouped_data = GROUP data BY column1;
result = FOREACH grouped_data GENERATE group AS column1, AVG(data.column2);
DUMP result;

-- Query 4 - Join Two Datasets
-- Hive:
SELECT a.*, b.* FROM dataset1 a JOIN dataset2 b ON a.id = b.id;

-- Pig:
joined_data = JOIN dataset1 BY id, dataset2 BY id;
DUMP joined_data;

-- Query 5 - Calculate Statistics and Order
-- Hive:
SELECT column1, COUNT(column2), SUM(column3)
FROM multi_gait_posture
WHERE column4 = 'XYZ'
GROUP BY column1
ORDER BY COUNT(column2) DESC;

-- Pig:
filtered_data = FILTER data BY column4 == 'XYZ';
grouped_data = GROUP filtered_data BY column1;
result = FOREACH grouped_data GENERATE group AS column1, COUNT(filtered_data.column2) AS count, SUM(filtered_data.column3) AS total;
ordered_data = ORDER result BY count DESC;
DUMP ordered_data;

-- Query 6 - Union Two Datasets
-- Hive:
INSERT INTO TABLE multi_gait_posture
SELECT * FROM dataset1
UNION ALL
SELECT * FROM dataset2;

-- Pig:
data1 = LOAD 'C:\\Users\\Shubham\\Documents\\GitHub\\CPP_Programming\\All_Folder\\BDA_Assign\\dataset1.csv' USING PigStorage(',') AS (...);
data2 = LOAD 'C:\\Users\\Shubham\\Documents\\GitHub\\CPP_Programming\\All_Folder\\BDA_Assign\\dataset2.csv' USING PigStorage(',') AS (...);
unioned_data = UNION data1, data2;
DUMP unioned_data;

-- Query 7 - Create a New Table
-- Hive:
CREATE TABLE new_table AS
SELECT column1, column2
FROM multi_gait_posture
WHERE column3 > 50;

-- Pig:
filtered_data = FILTER data BY column3 > 50;
new_table = FOREACH filtered_data GENERATE column1, column2;
DUMP new_table;

-- Query 8 - Alter Table to Add a Column
-- Hive:
ALTER TABLE multi_gait_posture ADD COLUMNS (new_column INT);

-- Pig:
-- Pig does not support altering tables like Hive. You would typically need to reload the data with the new schema.

-- Query 9 - Drop a Table
-- Hive:
DROP TABLE multi_gait_posture;

-- Pig:
-- Pig does not have a concept of tables to drop; it operates on data directly.

-- Query 10 - Perform a Lateral View
-- Hive:
SELECT column1, EXPLODE(SPLIT(column2, ',')) AS column2_element
FROM multi_gait_posture;

-- Pig:
split_data = FOREACH data GENERATE column1, FLATTEN(TOKENIZE(column2, ',')) AS column2_element;
DUMP split_data;
