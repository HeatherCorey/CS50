<?php

$numOrders = readline("How many orders:  ");

$orders = [];

for ($counter = 1; $counter <= $numOrders; $counter++)
{
    $name = readline("Order $counter's name: ");
    $choice = readline("Order $counter's order: ");
    
    $orders[$counter] = [$name => $choice];
    
}
print("\n");

print("Total Order: \n");

foreach($orders as $order)
{
    foreach($order as $name => $choice)
    {
        print($name);
        print(" is getting ");
        print($choice);
        print(". \n");
    }
}
?>