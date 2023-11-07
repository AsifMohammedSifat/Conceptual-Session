CREATE DATABASE UNIVERSITY;

USE UNIVERSITY;

CREATE TABLE STUDENT(
	student_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    age INT NOT NULL,
    
    CONSTRAINT CHECK_age CHECK(age>0)
)AUTO_INCREMENT = 1001;

INSERT INTO STUDENT(first_name,last_name,age)
VALUES
("Rahim","Rahim",25),
("Karim","Karim",20);



CREATE TABLE COURSE(
	course_id INT PRIMARY KEY AUTO_INCREMENT,
    course_name VARCHAR(50)
)AUTO_INCREMENT=1;

INSERT INTO COURSE(course_name)
VALUES
("CSE FUNDAMENTAL"),
("MACHINE LEARNING");



CREATE TABLE TEACHER(
	teacher_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    age INT NOT NULL,
    degree VARCHAR(50)
)AUTO_INCREMENT = 5001;

INSERT INTO TEACHER(first_name,last_name,age,degree)
VALUES
("Apu","Apu",30,"BSC");

CREATE TABLE ENROLLMENT (
    enrollment_id INT  AUTO_INCREMENT,
    who_enroll INT,
    which_enroll INT,
    
    CONSTRAINT enrollmentId_pk PRIMARY KEY(enrollment_id),
    CONSTRAINT studentID_fk FOREIGN KEY (who_enroll) REFERENCES STUDENT(student_id),
    CONSTRAINT whichEnroll_fk FOREIGN KEY (which_enroll) REFERENCES COURSE(course_id)
);

-- CREATE TABLE ENROLLMENT (
--     student_id INT,
--     course_id INT,
--     PRIMARY KEY (student_id, course_id),
--     FOREIGN KEY (student_id) REFERENCES STUDENT(student_id),
--     FOREIGN KEY (course_id) REFERENCES COURSE(course_id)
-- );

-- Add ON DELETE CASCADE to the studentID_fk foreign key constraint
ALTER TABLE ENROLLMENT
DROP CONSTRAINT studentID_fk;

ALTER TABLE ENROLLMENT
ADD CONSTRAINT studentID_fk FOREIGN KEY (who_enroll)
REFERENCES STUDENT(student_id)
ON DELETE CASCADE;

-- Add ON DELETE CASCADE and ON UPDATE CASCADE to the whichEnroll_fk foreign key constraint
ALTER TABLE ENROLLMENT
DROP CONSTRAINT whichEnroll_fk;

ALTER TABLE ENROLLMENT
ADD CONSTRAINT whichEnroll_fk FOREIGN KEY (which_enroll)
REFERENCES COURSE(course_id)
ON DELETE CASCADE
ON UPDATE CASCADE;


CREATE TABLE COURSE_TAKING(
	payment_amount INT,
    which_course INT,
    who_taking INT,
    
    PRIMARY KEY(which_course,who_taking),
    CONSTRAINT whichCourse_fk FOREIGN KEY (which_course) REFERENCES COURSE(course_id),
    CONSTRAINT whoTaking_fk FOREIGN KEY (who_taking) REFERENCES TEACHER(teacher_id)    
);


SELECT FIRST_NAME
FROM STUDENT S
	LEFT JOIN ENROLLMENT E
		ON S.STUDENT_ID = E.WHO_ENROLL
WHERE WHO_ENROLL IS NULL;

SELECT FIRST_NAME
FROM ENROLLMENT E
 RIGHT JOIN STUDENT S
	ON S.STUDENT_ID = E.WHO_ENROLL
WHERE WHO_ENROLL IS NULL;


