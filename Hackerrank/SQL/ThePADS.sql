select concat(name,'(',substr(OCCUPATION,1,1 ),')') 
from OCCUPATIONS 
order by name;
select concat('There are a total of' ,' ',count(*),' ',lower(OCCUPATION),'s.')
from OCCUPATIONS
group by OCCUPATION
order by count(OCCUPATION),OCCUPATION;