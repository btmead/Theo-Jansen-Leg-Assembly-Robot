format shortG
table = readtable("Leg Displacements_temp.xlsx", "Sheet", "Sheet1");

time = table.Var2(3:end);
leg1 = table.LinD_1(3:end);
leg2 = table.LinD_2(3:end);
leg3 = table.LinD_3(3:end);
leg4 = table.LinD_4(3:end);

values = sort(table{3:end,{'LinD_1','LinD_2','LinD_3','LinD_4'}},2);
values = values (:,2);

leg1 = 2.803 * (leg1 <= values);
leg2 = 2.803 * (leg2 <= values);
leg3 = 2.803 * (leg3 <= values);
leg4 = 2.803 * (leg4 <= values);



writematrix([time,leg1],"leg1.txt")
writematrix([time,leg2],"leg2.txt")
writematrix([time,leg3],"leg3.txt")
writematrix([time,leg4],"leg4.txt")