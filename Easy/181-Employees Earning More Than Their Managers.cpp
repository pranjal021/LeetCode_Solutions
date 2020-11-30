/* Write your T-SQL query statement below */
SELECT Name Employee
FROM Employee
WHERE Employee.Salary > (select Salary from Employee E where E.id = Employee.ManagerId)
