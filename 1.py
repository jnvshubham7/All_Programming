from pyspark.ml.regression import RandomForestRegressor
from pyspark.ml import Pipeline
from pyspark.ml.classification import RandomForestClassificationModel
from pyspark.ml.feature import VectorAssembler
from pyspark.sql import SparkSession
from sklearn.ensemble import RandomForestClassifier
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from joblib import load


# Create a Spark session
spark = SparkSession.builder.appName("RandomForestRegressionExample").getOrCreate()

# Load the preprocessed data from CSV
data = spark.read.csv("/content/drive/MyDrive/datasets/preprocessed2.csv", header=True, inferSchema=True)

# Select relevant features and target variables
input_features = ["Date", "Time"]
output_features = [col for col in data.columns if col not in ["_c0", "Date", "Time", "features"]]



# Assemble features into a single vector column
assembler = VectorAssembler(inputCols=input_features, outputCol="features")
data1 = assembler.transform(data)




# Assemble features into a single vector column
assembler = VectorAssembler(inputCols=input_features, outputCol="features")
data1 = assembler.transform(data)


# print(data1.head())
# columns_to_keep = [col for col  in ["features"]]
# data = data1.select(*(columns_to_drop))
# print(type(data))


print(data1.show())


# output_features = [col for col in data.columns if col not in ["_c0", "Date", "Time", "features"]]


# assembler1 = VectorAssembler(inputCols=output_features, outputCol="labels")
# data1 = assembler1.transform(data1)


# print(data1.show())




# Create a Random Forest Regressor
rf = RandomForestRegressor(labelCol='Global_active_power', featuresCol="features", numTrees=100)
# pipeline = Pipeline(stages=[assembler, rf])
(trainingData, testData) = data1.randomSplit([0.8, 0.2])


"""
# Create a pipeline with the assembler and the regressor
# Split the data into training and testing sets
"""




print(trainingData.show())




# print(trainingData.head())
# df.write.csv("./preprocessed2.csv", header=True, mode="overwrite")

model = rf.fit(trainingData)

# Make predictions on the test set
predictions = model.transform(testData)

# Show predictions
predictions.select("Date", "Time", "prediction").show()


predictions = model.transform(testData)


print(predictions.show())