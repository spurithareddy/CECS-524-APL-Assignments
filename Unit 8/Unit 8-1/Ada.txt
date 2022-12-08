with Ada.Text_IO; use Ada.Text_IO;
procedure Hello is
begin
    declare
      rate : Integer := 5;factor : Integer := 1;
    begin
        case rate is
        when 1|2 =>
            factor := 2 * rate - 1;
        when 3|5 =>
            factor := 3 * rate + 1;
        when 4 =>
            factor := 4 * rate - 1;
        when 6|7|8 =>
            factor := rate - 2;
        when others =>
            factor := rate;
    
        end case;
    Ada.Text_IO.Put_Line (Integer'Image (factor));
    end;

end Hello;
