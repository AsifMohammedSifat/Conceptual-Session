CREATE DATABASE COMPANY;

USE COMPANY;

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




