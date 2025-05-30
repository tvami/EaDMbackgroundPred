python3 extractDMLimits.py

python3 harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --xMax 1000 -o output_BR100pct.root

python3 harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --xMax 1000 --level 0.1 -o output_BR10pct.root

python3 harvestToContours.py --inputFile DMLimits.json  -x m2 -y m1 --useUpperLimit --debug --forbiddenFunction 2\*x --xMax 1000 --level 0.001 -o output_BR1pct.root

python3 2dplot.py outputGraphs.root



