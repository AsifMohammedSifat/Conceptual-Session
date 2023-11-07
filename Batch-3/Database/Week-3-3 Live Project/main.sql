CREATE DATABASE phitorn;

USE phitorn;


CREATE TABLE STUDENT(
	student_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    age INT CHECK(age>12)
)AUTO_INCREMENT=1001;

INSERT INTO STUDENT(first_name,last_name,age)
VALUES
("Rahim","Rahim",20),
("Karim","Karim",25);

CREATE TABLE COURSE(
	course_id INT PRIMARY KEY AUTO_INCREMENT,
    course_name VARCHAR(50) NOT NULL
);

INSERT INTO COURSE(course_name)
VALUES
("CSE FUNDAMENTAL"),
("MACHINE LEARNING");


CREATE TABLE ENROLLMENT(
	enrollment_id INT AUTO_INCREMENT,
    who_enroll INT,
    which_enroll INT,
    
    CONSTRAINT enrollment_pk PRIMARY KEY(enrollment_id),
    CONSTRAINT studentId_fk FOREIGN KEY(who_enroll) REFERENCES STUDENT(student_id) ON DELETE CASCADE,
    CONSTRAINT courseID_fk FOREIGN KEY(which_enroll) REFERENCES COURSE(course_id) ON DELETE CASCADE
);

INSERT INTO ENROLLMENT(who_enroll,which_enroll)
VALUES
(1001,1);


SELECT course_name FROM COURSE;

SELECT course_id FROM COURSE
WHERE course_name = "CSE FUNDAMENTAL";


SELECT S.first_name 
FROM STUDENT S
	LEFT JOIN ENROLLMENT E
		ON S.student_id= E.who_enroll
	WHERE WHO_ENROLL IS NULL;

SELECT S.first_name 
FROM ENROLLMENT E
	RIGHT JOIN STUDENT S
		ON S.student_id= E.who_enroll
	WHERE WHO_ENROLL IS NULL;















