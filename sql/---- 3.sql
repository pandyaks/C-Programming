---3 3. Table Name: Employee
---Create table given below: Employee and Incentive


CREATE TABLE Employee 
(
    Employee_Id INT PRIMARY KEY,
    First_name VARCHAR(50),
    Last_name VARCHAR(50),
    Salary INT,
    Joining_date DATETIME,
    Department VARCHAR(50)
);

insert into Employee values (1, 'John', 'Abraham', 1000000, '2013-01-01 12:00:00', 'Banking');
insert into Employee values (2, 'Michael', 'Clarke', 800000, '2013-01-01 12:00:00', 'Insurance');
insert into Employee values (3, 'Roy', 'Thomas', 700000, '2013-01-01 12:00:00', 'Banking');
insert into Employee values (4, 'Tom', 'Jose', 600000, '2013-02-01 12:00:00', 'Insurance');
insert into Employee values (5, 'Jerry', 'Pinto', 650000, '2013-02-01 12:00:00', 'Insurance');
insert into Employee values (6, 'Philip', 'Mathew', 750000, '2013-01-01 12:00:00', 'Services');
insert into Employee values (7, 'TestName1', '123', 650000, '2013-01-01 12:00:00', 'Services');
insert into Employee values (8, 'TestName2', 'Lname%', 600000, '2013-02-01 12:00:00', 'Insurance');

select * from Employee ;