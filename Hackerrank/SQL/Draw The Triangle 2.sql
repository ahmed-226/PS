delimiter $

create procedure drawTriangle (in numberofrows int)
begin
    declare counter int default 2;
    declare result text default '* ';

    draw: loop
        if counter > numberofrows+1 then leave draw;
        end if;
        
        select result ;
        set result = repeat('* ',counter);
        set counter = counter + 1;
    
    end loop draw;
end $
delimiter ;

call drawTriangle(20);