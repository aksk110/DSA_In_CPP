set terminal png size 1000,1000
set output 'time.png'
set title 'Time Complexity of averageofn2() vs averageofn()'
set xlabel 'Number of elements (n)'
set ylabel 'Time (microseconds)'
set grid
plot 'time.txt' using 1:2 with linespoints title 'averageofn2() O(n^2)', 'time.txt' using 1:3 with linespoints title 'averageofn() O(n)'
