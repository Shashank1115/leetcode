# Write your MySQL query statement below
select Employee.name as Employee
from Employee
join Employee AS Manager
ON Employee.managerId = Manager.id
where Employee.salary > Manager.salary