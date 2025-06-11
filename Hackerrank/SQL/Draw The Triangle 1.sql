delimiter $

create procedure drawTriangle (in numberofrows int)
begin
    declare counter int default numberofrows;
    declare result text default repeat('* ', numberofrows);

    draw : loop
        if counter < 1 then leave draw;
        end if;
        
        select result as re;
        set result = substring(result, 3);
        set counter = counter - 1;
    
    end loop draw;
end $
delimiter ;

call drawTriangle(20);