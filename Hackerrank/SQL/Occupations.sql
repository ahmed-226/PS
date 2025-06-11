select 
MAX(IF(OCCUPATION = 'DOCTOR',NAME, NULL)) AS DOCTOR,
min(IF(OCCUPATION ='PROFESSOR',NAME, NULL)) AS PROFESSOR,
MIN(IF(OCCUPATION ='SINGER',NAME,NULL)) AS SINGER ,
max(IF(OCCUPATION ='ACTOR',NAME,NULL)) as ACTOR
from
    (select name ,Occupation,Row_number() over (partition by Occupation order by name) as row_num from                 Occupations) as ord group by row_num
