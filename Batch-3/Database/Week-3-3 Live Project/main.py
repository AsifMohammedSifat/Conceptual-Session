import pymysql

connection = pymysql.connect(
    host = "localhost",
    user = "root",
    password="password",
    database="phitorn"
)

cursor = connection.cursor()


def addStudent(fName,lName,age):
    query = """
                INSERT INTO STUDENT(first_name,last_name,age)
                VALUES
                (%s,%s,%s)
            """
    try:
        cursor.execute(query,(fName,lName,age))
        connection.commit()
        print("Successfully Added")
    except pymysql.Error as e:
        print(f"Invalid Age. Error: {e}")

def addCourse(cName):
    query = """
                INSERT INTO COURSE(course_name)
                VALUES
                (%s)
            """
    cursor.execute(query,cName)
    connection.commit()
    print("Added Successfully")

def enrollCourse(stdId,courseName):
    query = """
               SELECT course_id FROM COURSE
               WHERE course_name = %s;
            """
    cursor.execute(query,courseName)
    courseId = cursor.fetchone()

    query = """
                INSERT INTO ENROLLMENT(who_enroll,which_enroll)
                VALUES (%s,%s)
            """
    cursor.execute(query,(stdId,courseId[0]))
    connection.commit()
    print("Congrats! Successfully Enrolled.")


def showNotEnroll():
    query = """
                SELECT S.first_name 
                FROM STUDENT S
                LEFT JOIN ENROLLMENT E
                ON S.student_id= E.who_enroll
                WHERE WHO_ENROLL IS NULL;
            """
    cursor.execute(query)
    alldata = cursor.fetchall()

    for data in alldata:
        print("-->",data[0])


def showAvailableCourse():
    query = """
                SELECT course_name FROM COURSE
            """
    cursor.execute(query)
    alldata = cursor.fetchall()
    print("Available Courses are: ")
    for data in alldata:
        print("-->",data[0])


while True:
    print("""
        1. Add Student
        2. Add Course
        3. Enroll Course
        4. Show Registered but Not Enrolled
        5. Exit
    """)
    op = int(input("Enter Your Choice: "))

    if op==1:
        fName = input("Enter Your First Name: ")
        lName = input("Enter Your last Name: ")
        age = int(input("Enter Your Age: "))
        addStudent(fName,lName,age)

    elif op==2:
        cName = input("Enter Course Name: ")
        addCourse(cName)

    elif op==3:
        showAvailableCourse()
        stdId = int(input("Enter Your Id: "))
        courseName = input("Enter Course Name: ")
        enrollCourse(stdId,courseName)
    elif op==4:
        showNotEnroll()
    elif op==5:
        connection.close()
        break
    else:
        print("Invalid Input")
