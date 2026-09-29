# Write your MySQL query statement below
SELECT email AS Email from Person
Group By email
Having count(email)>1;