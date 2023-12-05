CREATE DATABASE TEST;
USE TEST;

-- CREATE, INSERT,KEY, CONDITION, CONSTRAINS, (UPDATE+DELETE), (ALTER,DROP)
CREATE TABLE STUDENT(
	student_id INT AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(15) NOT NULL,
    roll INT(4),
    sec CHAR(1)    
   --  PRIMARY KEY(student_id)-- 
   --  CHECK (column1 > 0 AND LENGTH(column2) > 5)-- 
)AUTO_INCREMENT=1001;


-- 2 types of insert
INSERT INTO STUDENT(name,roll,sec)
VALUES
('ASIF',1,'A'),
('HASIF',2,'B'),
('TASIF',3,'A');
--  						UPDATE AND DELETE

-- IF we want to update without primary key; we have to use sql_safe_mode = 1 (ON) 0(OFF) 
-- otherwise we it show error; using primary key we can do it easily

UPDATE STUDENT
SET sec = 'A'
WHERE student_id=1002; -- using primary key

SET SQL_SAFE_UPDATES = 0;
UPDATE STUDENT
SET sec = 'B'
WHERE roll=2; -- using 

--  						ALTER AND DROP
ALTER TABLE STUDENT
ADD COLUMN RESULT VARCHAR(5);

ALTER TABLE STUDENT
MODIFY COLUMN RESULT CHAR(5);

ALTER TABLE STUDENT
DROP COLUMN RESULT;

DROP TABLE STUDENT;
-- ==================================================================================================
-- Add a New Column:

--                         ALTER TABLE table_name
--                         ADD COLUMN new_column_name datatype;

-- ==================================================================================================
-- Modify Column Data Type:                    
--                         ALTER TABLE table_name
--                         MODIFY COLUMN existing_column_name new_datatype;

-- ==================================================================================================
-- Drop a Column:
--                           
-- ALTER TABLE table_name
-- DROP COLUMN column_name;

-- ==================================================================================================
-- Rename a Table:
--   
-- ALTER TABLE old_table_name
-- RENAME TO new_table_name;

-- ==================================================================================================
-- Change the Default Value of a Column:
--   
-- ALTER TABLE table_name
-- ALTER COLUMN column_name SET DEFAULT new_default_value;

-- ==================================================================================================
-- Add a Primary Key:

-- ALTER TABLE table_name
-- ADD PRIMARY KEY (column_name);

-- ==================================================================================================
-- Add a Foreign Key:
--   
-- ALTER TABLE table_name
-- ADD FOREIGN KEY (column_name) REFERENCES other_table(other_column);

-- ==================================================================================================
-- Modify Indexes:
--   
-- ALTER TABLE table_name
-- ADD INDEX index_name (column_name);

-- ==================================================================================================
-- Modify Table Engine:
--   
-- ALTER TABLE table_name
-- ENGINE = InnoDB;
-- ==================================================================================================
-- Change Auto-Increment Seed and Increment Values:
--   
-- ALTER TABLE table_name
-- AUTO_INCREMENT = new_seed_value, AUTO_INCREMENT_INCREMENT = new_increment_value;

-- ==================================================================================================

--  						ON DELETE CASECADE AND ON UPDATE CASECADE + USES OF DATE

CREATE TABLE Department(
  department_id INT,
  department_name VARCHAR(20)
);

ALTER TABLE Department
ADD CONSTRAINT PRIMARY KEY(department_id);


CREATE TABLE EMPLOYEES(
	employee_id INT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL UNIQUE,
    phone VARCHAR(20) NOT NULL,
    hire_date DATE DEFAULT (CURRENT_DATE()),
    salary DECIMAL(10,2),
    department_id INT,
    CONSTRAINT fk_dept FOREIGN KEY(department_id) REFERENCES Department(department_id)
);

ALTER TABLE EMPLOYEES
DROP FOREIGN KEY fk_dept;

ALTER TABLE EMPLOYEES
ADD FOREIGN KEY(department_id)
REFERENCES Department(department_id)
ON UPDATE CASCADE
ON DELETE CASCADE;

SHOW CREATE TABLE EMPLOYEES;

INSERT INTO DEPARTMENT
VALUES
(1, 'Sales'),
(2, 'Marketing'),
(3, 'Human Resources'),
(4, 'Finance'),
(5, 'IT');


INSERT INTO EMPLOYEES
VALUES
  (1, 'John Smith', 'john@example.com', '1234567890', '2022-01-01', 5000.00, 1),
  (2, 'Emma Johnson', 'emma@example.com', '0987654321', '2022-02-01', 6000.00, 2),
  (3, 'Michael Davis', 'michael@example.com', '5555555555', '2022-03-01', 5500.00, 1),
  (4, 'Sarah Wilson', 'sarah@example.com', '9876543210', '2022-04-01', 4500.00, 3),
  (5, 'David Thompson', 'david@example.com', '4444444444', '2022-05-01', 5200.00, 5),
  (6, 'Emily Anderson', 'emily@example.com', '1111111111', '2022-06-01', 4800.00, 2),
  (7, 'Christopher Clark', 'christopher@example.com', '7777777777', '2022-07-01', 6200.00, 3),
  (8, 'Olivia Parker', 'olivia@example.com', '2222222222', '2022-08-01', 5100.00, 1),
  (9, 'Daniel Evans', 'daniel@example.com', '6666666666', '2022-09-01', 5400.00, 2),
  (10, 'Sophia Turner', 'sophia@example.com', '3333333333', '2022-10-01', 5900.00, 4),
  (11, 'Matthew Wilson', 'matthew@example.com', '9999999999', '2022-11-01', 4700.00, 3),
  (12, 'Ava Thomas', 'ava@example.com', '8888888888', '2022-12-01', 5300.00, 2),
  (13, 'James Brown', 'james@example.com', '7777777777', '2023-01-01', 6100.00, 3),
  (14, 'Mia Martin', 'mia@example.com', '6666666666', '2023-02-01', 5200.00, 1),
  (15, 'Benjamin Rodriguez', 'benjamin@example.com', '5555555555', '2023-03-01', 4800.00, 2),
  (16, 'Charlotte Scott', 'charlotte@example.com', '4444444444', '2023-04-01', 5700.00, 1),
  (17, 'Davidson Turner', 'davidson@example.com', '3333333333', '2023-05-01', 5100.00, 3),
  (18, 'Scarlett White', 'scarlett@example.com', '2222222222', '2023-06-01', 5900.00, 5),
  (19, 'Henry Adams', 'henry@example.com', '1111111111', '2023-07-01', 5300.00, 2),
  (20, 'Amelia Green', 'amelia@example.com', '9999999999', '2023-08-01', 5500.00, 3);

-- SELECT CURRENT_DATE();

INSERT INTO EMPLOYEES(employee_id,name,email,phone,salary,department_id)
VALUES(21,"OVI","ovi@gmail.com","123456",10000,5);


UPDATE EMPLOYEES
SET hire_date = (SELECT hire_date WHERE employee_id = 21)-1
WHERE employee_id = 21;

SET SQL_SAFE_UPDATES = 0;

UPDATE DEPARTMENT
SET department_id = 10
WHERE department_name = "IT";

--  						DUMMY DB-> https://drive.google.com/file/d/1Lkklsw33VSjlRKQ3bxmwIUqGXtfQgJ-r/view

-- GROUP BY HAVING

-- MAX SALARY 
SELECT department_name,MAX(SALARY)
FROM EMPLOYEES E 
	JOIN DEPARTMENTS D
		ON E.department_id = D.department_id
GROUP BY department_name
HAVING MAX(SALARY)<15000
ORDER BY D.DEPARTMENT_NAME DESC;

-- Count the number of employees of each job type
SELECT
job_id as job_type,
count(employee_id) as total
from
employees
GROUP BY
job_id;



-- JOIN, FUNCTION, COMMON TABLE EXPRESSION
-- JOIN -> 1) INNER/JOIN 2)LEFT 3)RIGHT  4)FULL 5)CROSS 6)SELF (Whitout using join keyword)

-- Show employee name and manager name

-- INNER JOIN / JOIN
SELECT E.FIRST_NAME AS EMPLOYEE_NAME,M.FIRST_NAME AS MANAGER_NAME
FROM EMPLOYEES AS E
JOIN EMPLOYEES AS M
ON E.manager_id = M.employee_id;

-- SELF join
SELECT E.FIRST_NAME AS EMPLOYEE_NAME,M.FIRST_NAME AS MANAGER_NAME
FROM EMPLOYEES AS E,EMPLOYEES AS M -- self join
WHERE E.manager_id = M.employee_id;


-- select which department how many employees
-- LEFT JOIN
SELECT d.department_id, d.department_name, COUNT(e.employee_id) AS employee_count
FROM departments d
LEFT JOIN employees e ON d.department_id = e.department_id
GROUP BY d.department_id, d.department_name;

-- RIGHT JOIN
SELECT d.department_id, d.department_name, COUNT(e.employee_id) AS employee_count
FROM employees e 
RIGHT JOIN departments d ON d.department_id = e.department_id
GROUP BY d.department_id, d.department_name;

-- Here is the query for the names of Departments which doesn’t have any employees:

SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS
		LEFT JOIN EMPLOYEES
			ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;

-- select department which dont have any employee


