{"filter":false,"title":"houseoftires.c","tooltip":"/module3/exercises/delmar/houseoftires.c","undoManager":{"mark":25,"position":25,"stack":[[{"start":{"row":0,"column":0},"end":{"row":18,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","#include <math.h>","// TODO: include the header file with our numberOfContainers function so we can use the function!","","int main(void)","{","    int tiresPerCrate = 20;","    float pricePerCrate = 1800.00;","","    // Display a message for the user, ask how many tires they want","    printf(\"Welcome to Delmar House of Tires!\\n How many tires do you want? \");","    int numberOfTires = GetInt();","","    // Get the number of crates of tires to order","    int numberOfCrates = numberOfContainers(numberOfTires, tiresPerCrate);","    float totalCost = numberOfCrates*pricePerCrate;","    printf(\"\\n\\nYou need %i crates for %i tires.\\nThat'll be %.2f!\\n\", numberOfCrates, numberOfTires, totalCost);","}"],"id":1}],[{"start":{"row":2,"column":17},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":1},"action":"insert","lines":["#"],"id":3}],[{"start":{"row":3,"column":1},"end":{"row":3,"column":2},"action":"insert","lines":["i"],"id":4}],[{"start":{"row":3,"column":2},"end":{"row":3,"column":3},"action":"insert","lines":["n"],"id":5}],[{"start":{"row":3,"column":3},"end":{"row":3,"column":4},"action":"insert","lines":["c"],"id":6}],[{"start":{"row":3,"column":4},"end":{"row":3,"column":5},"action":"insert","lines":["l"],"id":7}],[{"start":{"row":3,"column":5},"end":{"row":3,"column":6},"action":"insert","lines":["u"],"id":8}],[{"start":{"row":3,"column":6},"end":{"row":3,"column":7},"action":"insert","lines":["d"],"id":9}],[{"start":{"row":3,"column":7},"end":{"row":3,"column":8},"action":"insert","lines":["e"],"id":10}],[{"start":{"row":3,"column":8},"end":{"row":3,"column":9},"action":"insert","lines":[" "],"id":11}],[{"start":{"row":3,"column":9},"end":{"row":3,"column":10},"action":"insert","lines":["<"],"id":12}],[{"start":{"row":3,"column":9},"end":{"row":3,"column":10},"action":"remove","lines":["<"],"id":13}],[{"start":{"row":3,"column":9},"end":{"row":3,"column":11},"action":"insert","lines":["\"\""],"id":14}],[{"start":{"row":3,"column":10},"end":{"row":3,"column":11},"action":"insert","lines":["m"],"id":15}],[{"start":{"row":3,"column":11},"end":{"row":3,"column":12},"action":"insert","lines":["a"],"id":16}],[{"start":{"row":3,"column":12},"end":{"row":3,"column":13},"action":"insert","lines":["t"],"id":17}],[{"start":{"row":3,"column":13},"end":{"row":3,"column":14},"action":"insert","lines":["h"],"id":18}],[{"start":{"row":3,"column":14},"end":{"row":3,"column":15},"action":"insert","lines":["h"],"id":19}],[{"start":{"row":3,"column":15},"end":{"row":3,"column":16},"action":"insert","lines":["e"],"id":20}],[{"start":{"row":3,"column":16},"end":{"row":3,"column":17},"action":"insert","lines":["l"],"id":21}],[{"start":{"row":3,"column":17},"end":{"row":3,"column":18},"action":"insert","lines":["p"],"id":22}],[{"start":{"row":3,"column":18},"end":{"row":3,"column":19},"action":"insert","lines":["e"],"id":23}],[{"start":{"row":3,"column":19},"end":{"row":3,"column":20},"action":"insert","lines":["r"],"id":24}],[{"start":{"row":3,"column":20},"end":{"row":3,"column":21},"action":"insert","lines":["."],"id":25}],[{"start":{"row":3,"column":21},"end":{"row":3,"column":22},"action":"insert","lines":["h"],"id":26}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":3,"column":22},"end":{"row":3,"column":22},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1455673414966,"hash":"9a2ec187f9a70f2f7782c6e758b9ecb932fca45c"}