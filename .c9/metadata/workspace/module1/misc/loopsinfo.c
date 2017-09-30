{"filter":false,"title":"loopsinfo.c","tooltip":"/module1/misc/loopsinfo.c","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":51,"column":0},"action":"insert","lines":["#include <stdio.h>","","// This example provides a side-by-side comparison of a while-loop and a for-loop.","","// for-loops just provide a different syntax for accomplishing the same thing as while-loops.","","// In fact, they are both composed of the same 4 basic components:","//    INITIALIZE, CONDITION, BODY, MODIFY","","int main(void)","{","  ","  // WHILE LOOP -----------------------------------------","  ","  // INITIALIZE: initialize some variable(s)","  int i = 0;","  ","  // CONDITION: should we enter the loop (again)?","  while(i < 10)","  {","    // BODY: do stuff","    printf(\"Let's pause and appreciate the number %i\\n\", i);","    printf(\"A moment of contemplation please...\\n\");","    printf(\"...\\n\");","    printf(\"Thank you.\\n\");","    ","    // MODIFY: modify variable(s)","    i = i + 1;","  }","  ","  ","  // FOR LOOP -------------------------------------------","  ","  //  (INITIALIZE ; CONDITION ; MODIFY   )","  for (int i = 0  ; i < 10    ; i = i + 1)","  {","    // BODY","    printf(\"Let's pause and appreciate the number %i\\n\", i);","    printf(\"A moment of contemplation please...\\n\");","    printf(\"...\\n\");","    printf(\"Thank you.\\n\");","  }","  ","  ","  // NOTE: ","  // Instead of","  // i = i + 1","  // you will usually see","  // i++","  // which is just a \"sexier\" syntax for incrementing i by 1. They are exactly the same.","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":440,"scrollleft":0,"selection":{"start":{"row":13,"column":2},"end":{"row":13,"column":2},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":30,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1453603691505,"hash":"7bb09f746320aee3947b314bbc1b80236153e4fc"}