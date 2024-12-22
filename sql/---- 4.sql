----4. Create table given below: Salesperson and Customer;
CREATE TABLE Salesperson 
(
    SNo INT PRIMARY KEY,
    SName VARCHAR(50),
    City VARCHAR(50),
    Comm DECIMAL(4, 2)
);

INSERT INTO Salesperson (SNo, SName, City, Comm) VALUES
(1001, 'Peel', 'London', 0.12),
(1002, 'Serres', 'San Jose', 0.13),
(1004, 'Motika', 'London', 0.11),
(1007, 'Rafkin', 'Barcelona', 0.15),
(1003, 'Axelrod', 'New York', 0.10);
insert into Salesperson  values (1001, 'Peel', 'London', 0.12);
insert into Salesperson  values (1002, 'Serres', 'San Jose', 0.13);
insert into Salesperson  values (1004, 'Motika', 'London', 0.11);
insert into Salesperson  values (1007, 'Rafkin', 'Barcelona', 0.15);
insert into Salesperson  values (1003, 'Axelrod', 'New York', 0.10);

select * from Salesperson  ;

-- Table 2: Customer
CREATE TABLE Customer 
(
    CNM INT PRIMARY KEY,
    CName VARCHAR(50),
    City VARCHAR(50),
    Rating INT,
    SNo INT,
    FOREIGN KEY (SNo) REFERENCES Salesperson(SNo)
);

insert into Customer values (201, 'Hoffman', 'London', 100, 1001);
insert into Customer values (202, 'Giovanne', 'Roe', 200, 1003);
insert into Customer values (203, 'Liu', 'San Jose', 300, 1002);
insert into Customer values (204, 'Grass', 'Barcelona', 100, 1007);
insert into Customer values (206, 'Clemens', 'London', 100, 1004);
insert into Customer values (207, 'Pereira', 'Roe', 100, 1003);

select * from  Customer ;

SELECT * FROM Customer WHERE Rating > 1000;
SELECT SName, City FROM Salesperson WHERE City = 'London' AND Comm > 0.12;
SELECT * FROM Salesperson WHERE City = 'Barcelona' OR City = 'London';

