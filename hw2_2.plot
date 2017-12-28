set title "Homework 2 bifurcation"
set xlabel "{/Symbol l}"
set ylabel "f"

set output "hw2_2_plot.png"

plot [-1:3] [-2:3] 'hw2_2_output.txt' title 'lambda * x + x^3' with points pt 7 ps 0.3
