var
v,a :integer;
begin
Writeln('¬ведите сначала тип данных, затем его значение');
Readln(v,a);
case v of
 1: Writeln(a*24*60*60); 
 2: Writeln(a*60*60);
 3: Writeln(a*60);
 else Writeln(a);
end;
end.