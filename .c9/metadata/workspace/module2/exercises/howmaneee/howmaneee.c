{"filter":false,"title":"howmaneee.c","tooltip":"/module2/exercises/howmaneee/howmaneee.c","undoManager":{"mark":24,"position":24,"stack":[[{"start":{"row":0,"column":0},"end":{"row":27,"column":1},"action":"insert","lines":["/**"," * howmaneee.c"," * Calculates the number of occurances of the character 'e' found within the user's input "," */","","#include <stdio.h>","#include <cs50.h>","#include <string.h>","","// FIXME there's something wrong with this code. It's not working!","int main(void)","{","  printf(\"Type some stuff: \");","  string userinput = GetString();","","  // count the occurrances of the letter 'e'","  int len = strlen(userinput);","  for (int i = 0; i < len; i++)","  {","    int counter = 0;","    if (userinput[i] == 'e')","    {","      counter++;","    }","  }","","  printf(\"The thing you just typed contains %i 'e's!\\n\", counter);","}"],"id":1}],[{"start":{"row":19,"column":4},"end":{"row":19,"column":20},"action":"remove","lines":["int counter = 0;"],"id":48}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"remove","lines":["    "],"id":49}],[{"start":{"row":18,"column":3},"end":{"row":19,"column":0},"action":"remove","lines":["",""],"id":50}],[{"start":{"row":16,"column":30},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":51},{"start":{"row":17,"column":0},"end":{"row":17,"column":2},"action":"insert","lines":["  "]}],[{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"insert","lines":["i"],"id":52}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"insert","lines":["n"],"id":53}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["t"],"id":54}],[{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":[" "],"id":55}],[{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["o"],"id":56}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":["u"],"id":57}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"remove","lines":["u"],"id":58}],[{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"remove","lines":["o"],"id":59}],[{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["c"],"id":60}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":["o"],"id":61}],[{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["u"],"id":62}],[{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":["n"],"id":63}],[{"start":{"row":17,"column":10},"end":{"row":17,"column":11},"action":"insert","lines":["t"],"id":64}],[{"start":{"row":17,"column":11},"end":{"row":17,"column":12},"action":"insert","lines":["e"],"id":65}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["r"],"id":66}],[{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":[" "],"id":67}],[{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":["="],"id":68}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"insert","lines":[" "],"id":69}],[{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"insert","lines":["0"],"id":70}],[{"start":{"row":17,"column":17},"end":{"row":17,"column":18},"action":"insert","lines":[";"],"id":71}]]},"ace":{"folds":[],"scrolltop":65,"scrollleft":0,"selection":{"start":{"row":17,"column":18},"end":{"row":17,"column":18},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":3,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1454434357000,"hash":"c56e2d5edfb5f0fdeb5467e2289707558cd77857"}