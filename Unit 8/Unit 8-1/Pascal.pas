

program Pascal;
var
	rate: integer=5;
var
    factor:integer=1;

begin
   	
    Case rate of
    1,2: factor := 2 * rate - 1;
    3,5: factor := 3 * rate + 1;
    4: factor := 4 * rate - 1;
    6,7,8: factor := rate-2;
	else
            factor:=rate;
    end;


    writeln(factor)

end.

