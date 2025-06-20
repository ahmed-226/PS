select e.name as Employee
from Employee as e 
where e.salary > (
    select e2.salary
    from Employee as e2
    where e.managerId=e2.id
)