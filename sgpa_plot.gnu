set terminal png size 800,400
set output 'sgpa_plot.png'
set title 'Student's SGPA Progression'
set xlabel 'Semester'
set ylabel 'SGPA'
plot 'sgpa_data.txt' with linespoints title 'SGPA'
