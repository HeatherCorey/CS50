{"filter":false,"title":"mathhelper.c","tooltip":"/module3/exercises/delmar/mathhelper.c","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":3,"column":97},"action":"insert","lines":["#include \"mathhelper.h\"","#include <math.h>","","// TODO: cut the function from houseOfPizza.c and put it here, so we can use it in houseOfTires.c"],"id":1}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":97},"action":"remove","lines":["// TODO: cut the function from houseOfPizza.c and put it here, so we can use it in houseOfTires.c"],"id":2},{"start":{"row":3,"column":0},"end":{"row":8,"column":1},"action":"insert","lines":["int numberOfContainers(int numberOfUnits, int unitsPerContainer)","{","    // calculate number of containers to order using ceil from math.h","    float numberToOrder = ceil(((float)numberOfUnits)/unitsPerContainer);","    return (int)numberToOrder;","}"]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":8,"column":1},"end":{"row":8,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1455673189000,"hash":"3c0bff8550b6e22635be02c09978b51d7f4bcac4"}