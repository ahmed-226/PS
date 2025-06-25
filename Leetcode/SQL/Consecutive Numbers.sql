select DISTINCT  L1.num as ConsecutiveNums 
from (
    select L.num,
        LEAD(num) over(order by id) lead_num,
        LAG(num) over(order by id) lag_num
    from Logs L
) as L1
WHERE L1.num = L1.lead_num
AND L1.num = L1.lag_num;