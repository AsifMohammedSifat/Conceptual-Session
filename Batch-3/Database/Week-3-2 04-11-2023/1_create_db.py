import pymysql

connection = pymysql.connect(
    host = "localhost",
    user="root",
    password="password"
)
query = "CREATE DATABASE IF NOT EXISTS SCHOOL"
cursor = connection.cursor()

cursor.execute(query)
