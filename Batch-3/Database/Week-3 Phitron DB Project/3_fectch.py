import pymysql

connection = pymysql.connect(
    host = "localhost",
    user = "root",
    password = "password",
    database="University"
)

cursor = connection.cursor()

query = """
         select * from student
         """
cursor.execute(query)
data = cursor.fetchone() # fetch-One
print(data)


cursor.execute(query)
data = cursor.fetchmany(3) #fetch-Many
print(data)
print(cursor.rowcount)
print(cursor.rownumber)

if "Rahim" in data[0]:
    print("YES")
else:
    print("NO")
