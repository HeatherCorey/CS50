{"filter":false,"title":"marathon.c","tooltip":"/module1/exercises/marathon.c","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":22,"column":1},"action":"insert","lines":["/**"," * marathon"," * predicts the time at which a marathon runner will cross the finish line, "," * assuming they continue to run at a constant speed"," */","","#include <stdio.h>","#include <cs50.h>","","int main(void)","{","  printf(\"How many miles have you run so far? \");","  float miles_run = GetFloat();","","  printf(\"How hours ago did you start? \");","  float hours_so_far = GetFloat();","","  float mph = miles_run / hours_so_far;","  float hours_remaining = 26.2 - miles_run / mph;","","  printf(\"At this rate, you have %f hours left.\", hours_remaining);","","}"],"id":1}],[{"start":{"row":14,"column":14},"end":{"row":14,"column":15},"action":"insert","lines":["m"],"id":2}],[{"start":{"row":14,"column":15},"end":{"row":14,"column":16},"action":"insert","lines":["a"],"id":3}],[{"start":{"row":14,"column":16},"end":{"row":14,"column":17},"action":"insert","lines":["n"],"id":4}],[{"start":{"row":14,"column":17},"end":{"row":14,"column":18},"action":"insert","lines":["y"],"id":5}],[{"start":{"row":14,"column":18},"end":{"row":14,"column":19},"action":"insert","lines":[" "],"id":6}],[{"start":{"row":20,"column":47},"end":{"row":20,"column":48},"action":"insert","lines":["\\"],"id":7}],[{"start":{"row":20,"column":48},"end":{"row":20,"column":49},"action":"insert","lines":["n"],"id":8}],[{"start":{"row":18,"column":26},"end":{"row":18,"column":27},"action":"insert","lines":["("],"id":9}],[{"start":{"row":18,"column":43},"end":{"row":18,"column":44},"action":"insert","lines":[")"],"id":10}]]},"ace":{"folds":[],"scrolltop":121,"scrollleft":0,"selection":{"start":{"row":12,"column":31},"end":{"row":12,"column":31},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":7,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1453437767000,"hash":"cc51127403dde0fa46460bfea27d091b70c7f4e8"}