-- your code goes here
---------------------------------------------------------------------------------------   
-- 175. Combine Two Tables

SELECT firstname,lastname,city,state
FROM PERSON P
    LEFT JOIN ADDRESS AD
        ON P.personId = AD.personId

---------------------------------------------------------------------------------------        
-- 181. Employees Earning More Than Their Managers

-- way 1
SELECT EMP.name AS Employee 
FROM Employee EMP,Employee MGR
WHERE EMP.managerId=MGR.id AND EMP.salary>MGR.salary

-- way 2
SELECT E.name AS Employee
FROM EMPLOYEE E
INNER JOIN EMPLOYEE M ON  E.managerId = M.id
WHERE  E.SALARY>M.SALARY;

---------------------------------------------------------------------------------------   
-- Duplicate Emails

-- Way 1 : Normal way
SELECT Email -- COUNT(Email)
FROM PERSON
GROUP BY Email
HAVING COUNT(Email)>1

-- Way 2 : INNER Join
SELECT DISTINCT p1.email AS Email
FROM PERSON p1
    INNER JOIN PERSON p2
    ON p1.email = p2.email
WHERE p1.id<>p2.id;

---------------------------------------------------------------------------------------   
-- 183. Customers Who Never Order
SELECT name AS Customers
FROM  CUSTOMERS
    LEFT JOIN ORDERS
        ON CUSTOMERS.ID = ORDERS.CUSTOMERID
WHERE ORDERS.CUSTOMERID IS NULL;

