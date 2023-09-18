CREATE DATABASE IF NOT EXISTS database1;       --Creating the database
USE  database1;                                --switching the database

--creating the table named customer
CREATE TABLE customer(
    id int primary key,
    f_name varchar(25),
    dob DATE,
    gender CHAR(6),
    salary int,
    post varchar(25)
);

--inserting the values into the table
INSERT INTO customer(id, f_name, dob, gender, salary, post)
VALUES  (001,'ram','2001-05-20','male',10000, 'hr'),
        (002,'bam','2001-06-20','male',20000,'admin'),
        (003,'cam','2001-07-20','female',30000,'admin'),
        (004,'dam','2001-08-20','female',40000,'hr'),
        (005,'sam','2001-09-20','male',50000,'manager');

--printing all the columns using * 
SELECT * FROM customer;

--here * can print all columns or you can enter the specific name of column
SELECT * FROM customer WHERE salary > 30000;

--print specific column, it prints only the names of the female customers
SELECT f_name FROM customer WHERE gender = 'female';

--print details of those whose salary is between the given range 
SELECT * FROM customer WHERE salary BETWEEN 20000 AND 50000;

--using IN clause to remove multiple OR clauses
SELECT * FROM customer WHERE post = 'hr' OR post = 'adimin';
SELECT * FROM customer WHERE post IN ('hr','admin');

--NOT clause, it will print info about post manager
SELECT * FROM customer WHERE post NOT IN ('hr','admin');

