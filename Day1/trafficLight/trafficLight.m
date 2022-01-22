%UpperRect
xrec=[20,20,30,30,20];
yrec=[15,45,45,15,15];
plot(xrec,yrec);
fill(xrec,yrec,'k');

hold on;
%circle 1
r1=3;
theta1=0:0.1:360;
x1=r1*cosd(theta1)+25;
y1=r1*sind(theta1)+40;
plot(x1,y1);

hold on;
%circle 2
r2=3;
theta2=0:0.1:360;
x2=r2*cosd(theta1)+25;
y2=r2*sind(theta1)+30;
plot(x2,y2);

hold on;
%circle 3
r3=3;
theta3=0:0.1:360;
x3=r3*cosd(theta1)+25;
y3=r3*sind(theta1)+20;
plot(x3,y3);

%small rec
xrec1=[24,24,26,26,24];
yrec1=[5,15,15,5,5];
plot(xrec1,yrec1);
fill(xrec1,yrec1,'y')

xlim([0 50]);
ylim([0 50]);

for c=1:1:5
    fill(x1,y1,'r');
    pause(2)
    fill(x1,y1,'w');
    fill(x2,y2,'y');
    pause(2)
    fill(x2,y2,'w');
    fill(x3,y3,'g');
    pause(2)
    fill(x3,y3,'w');
end