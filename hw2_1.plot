set title "Homework 2 bifurcation"
set xlabel "{/Symbol l}"
set ylabel "f"

set output "hw2_1_plot.png"

plot [-4:-1] [-4:1] 'hw2_1_output.txt' title 'lambda + exp(x)' with points pt 7 ps 0.3
