import pymysql

connection = pymysql.connect(
    host = "localhost",
    user = "root",
    password = "password",
    database="University"
)

cursor = connection.cursor()

def addTeacher(fname,lname,age,degree):
    query = """
            INSERT INTO  TEACHER(first_name,last_name,age,degree)
            VALUES(%s,%s,%s,%s)
            """
    cursor.execute(query,(fname,lname,age,degree))
    connection.commit()
    print("Updated Successfully")

def addStudent(fName,lName,age):
    query = """
            INSERT INTO  Student(first_name,last_name,age)
            VALUES(%s,%s,%s)
            """
    cursor.execute(query,(fName,lName,age))
    connection.commit()
    print("Updated Successfully")

def addCourse(cName):
    query = """
                INSERT INTO COURSE(course_name)
                VALUES(%s)
            """
    cursor.execute(query,(cName))
    connection.commit()
    print("Added Successfully")

def enrollCourse(id,course):
    query = """
                SELECT course_id FROM COURSE
                WHERE course_name = %s
            """
    cursor.execute(query,(course))
    courseID = cursor.fetchone()
    # print(courseID[0])
    query = """
                INSERT INTO ENROLLMENT(who_enroll,which_enroll)
                VALUES(%s,%s)
            """
    cursor.execute(query,(id,courseID))
    connection.commit()

def assignCourse():
    pass

def showAllCourse():
    query = "SELECT course_name FROM COURSE"
    cursor.execute(query)
    allcourse = cursor.fetchall()
    for c in allcourse:
        print("--> ",c[0])


def showNotEnroll():
    query = """
            SELECT FIRST_NAME
            FROM STUDENT S
	        LEFT JOIN ENROLLMENT E
		        ON S.STUDENT_ID = E.WHO_ENROLL
            WHERE WHO_ENROLL IS NULL;
            """
    cursor.execute(query)
    alldata = cursor.fetchall()
    for data in alldata:
        print(data[0],end=" ")

while True:
    print("""
        1. Add Teacher
        2. Add Student
        3. Add Course
        4. Enroll Course
        5. Assign Course
        6. Show Registered But Not Enrolled
        7. Exit
    """)

    op = int(input("Enter Your Choice: "))
    if op==1:
        fName = input("Enter Teachers First Name: ")
        lName = input("Enter Teachers last Name: ")
        age = int(input("Enter Teachers age: "))
        degree = input("Enter Teachers Degree: ")        
        addTeacher(fName,lName,age,degree)

    elif op==2:
        fName = input("Enter Students First Name: ")
        lName = input("Enter Students last Name: ")
        age = int(input("Enter Students age: "))         
        addStudent(fName,lName,age)

    elif op==3:
        cName = input("Enter Course Name: ")
        addCourse(cName)

    elif op==4:
        showAllCourse()
        course = input("Select Course: ")
        id = int(input("Enter Your ID: "))
        enrollCourse(id,course)
    elif op==5:
        assignCourse()
    elif op==6:
        showNotEnroll()
    elif op==7:
        break
    else:
        print("Invalid Input")

