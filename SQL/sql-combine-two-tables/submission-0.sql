-- Write your query below
select person.first_name, 
person.last_name, 
address.city, 
address.state 
from person 
LEFT JOIN address 
ON  person.person_id = address.person_id ;