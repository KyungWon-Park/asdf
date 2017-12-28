set title "Homework 2 bifurcation"
set xlabel "{/Symbol l}"
set ylabel "f"

set output "hw2_2_plot.png"

unset key
plot [-1:3] [-2:3] 'hw2_2_output_0.txt' title 'lambda * x + x^3' with points pt 7 ps 0.3
replot 'hw2_2_output_1.txt' with points pt 7 ps 0.3
replot 'hw2_2_output_2.txt' with points pt 7 ps 0.3
replot 'hw2_2_output_3.txt' with points pt 7 ps 0.3
