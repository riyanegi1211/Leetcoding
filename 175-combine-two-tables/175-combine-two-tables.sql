# Write your MySQL query statement below
Select firstname, lastname, city, state from person
left join address 
on address.personid=person.personid;
