select x,y,z,
    case
    when  x+y>z and z+y>x and x+z>y then 'Yes'
    else 'No'
    end as  triangle 
from Triangle 