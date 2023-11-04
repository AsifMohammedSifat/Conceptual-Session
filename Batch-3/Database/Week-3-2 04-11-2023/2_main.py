import pymysql

db_name = "school"

connection = pymysql.connect(
    host = "localhost",
    user="root",
    password="password",
    database = db_name
)
# query = "CREATE DATABASE IF NOT EXISTS SCHOOL"
# cursor = connection.cursor()

# cursor.execute(query)


def createTable(tableName):
    query = f"""
            CREATE TABLE IF NOT EXISTS {tableName}(
                id INT PRIMARY KEY AUTO_INCREMENT,
                name VARCHAR(50) NOT NULL,
                age INT,
                grade FLOAT
            );
            """
    cursor = connection.cursor()
    cursor.execute(query)
    
def addStudent(tableName,name,age,grade):
    query = f"""
            INSERT INTO {tableName}(name,age,grade)
            VALUES(%s,%s,%s)            
            """
    cursor = connection.cursor()
    cursor.execute(query,(name,age,grade))
    
    connection.commit()

def updateGrade(tableName,id,grade):
    query = f"""
            UPDATE {tableName}
            SET grade = %s
            WHERE id = %s
        """
    
    cursor = connection.cursor()
    cursor.execute(query,(grade,id))
    connection.commit()
    print("Successfully Updated")
    
def increaseAge(id,val):
    query = """
            SELECT age FROM STUDENT WHERE ID = %s
            """
    cursor = connection.cursor()
    cursor.execute(query,(id))
    age = cursor.fetchone()
    # print(age)
    # print(type(age[0]))
    newage = age[0] + val

    cursor.execute("""
                     UPDATE STUDENT
                    SET AGE = %s
                   WHERE ID = %s
                """,(newage,id))
    connection.commit()
    print("Successfully Updated")

def viewAll():
    query = """
                SELECT * FROM STUDENT
            """
    cursor = connection.cursor()
    cursor.execute(query)

    students = cursor.fetchall()

    for std in students:
        id,name,age,grade = std
        print(f"{id} - {name} - {age} - {grade}\n")


while True:
    print("""
            1. Create Table
            2. Add Student
            3. Update Grade
            4. Increase Age
            5. View All Student
            6. EXIT
        """)
    option = int(input("Enter Your Choice: "))

    if option==1:
        tableName = input("Enter Table Name: ")
        createTable(tableName)
        print("Create Table Successfully\n")
    elif option==2:
        tableName = input("Enter Table Name: ")
        name = input("Enter Student Name: ")
        age = int(input("Enter Age: "))
        grade = float(input("Enter Grade: "))
        addStudent(tableName,name,age,grade)
    elif option==3:
        tableName = input("Enter Table Name: ")
        stdID = int(input("Enter Your ID: "))
        newGrade = float(input("Enter New Grade: "))
        updateGrade(tableName,stdID,newGrade)

    elif option==4:
        id = int(input("Enter Id: "))
        val = int(input("Enter Value to Increase: "))
        increaseAge(id,val)
    elif option==5:
        viewAll()
    elif option==6:
        break
    else:
        print("Invalid Input Given\n")



        # Set-ExecutionPolicy Unrestricted -Force
