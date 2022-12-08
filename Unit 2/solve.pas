program solve;
var a,b,c:real;
var im:real;
var rl:real;
procedure SolveRoots(a, b,c: real);
begin

    if(b*b-4*a*c>0) then
        begin

        writeln('Roots are real');
        writeln('Root 1:',(-b+sqrt((b*b)-4*a*c))/(2*a));
        writeln('Root 2:',(-b-sqrt((b*b)-4*a*c))/(2*a));
        end


    else if(b*b-4*a*c=0) then
        begin
        writeln('One real root');
        writeln('Root 1:',(-b)/(2*a));
        end


    else if(b*b-4*a*c<0) then
        begin
        writeln('Roots are Imaginary');
        rl:=-b/(2*a);
        im:= sqrt(-((b*b)-4*a*c))/2*a;
        if(b=0) then
        begin
            writeln('Root 1:','i*',im);
            writeln('Root 2:','i*',-im);
        end
        else
        begin
            writeln('Root 1:',rl,'+i*',im);
            writeln('Root 2:',rl,'-i*',im);
        end
end





end;
begin


    repeat
    Writeln('Enter a b c values: ');
    Readln(a,b,c);
    if (a = 0) and (b = 0) and (c = 0) then
    begin
        Writeln('3 equations were solved');
        exit;
    end;
    SolveRoots(a,b,c);

    until a = 0;

end.




