clc
clear

a=input('Lower Limit: ');
b=input('Uper Limit: ');
n=input('Numbers of Interval: ');

h=(b-a)/n;

for r=1:1:6
   x(1)=0;
   y(1)=x(1)/(1+x(1));

   x(r+1)=h+x(r);
   y(r+1)=x(r+1)/(1+x(r+1));
end

ans= h/2*((y(1)+y(7))+2*(y(2)+y(3)+y(4)+y(5)+y(6)));

difference = [x'y'];
disp('	x	 y');
disp(difference);
disp('Result: ');
disp(ans);
   