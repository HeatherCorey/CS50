<?php

$numOrders = readline("How many orders:  ");

$orders = [];

for ($counter = 1; $counter <= $numOrders; $counter++)
{
    $name = readline("Order $counter's name: ");
    $choice = readline("Order $counter's order: ");
    
    $order = [$name => $choice];
    $orders[] = $order;
    
}
print("\n");

print("Total Order: \n");

foreach($orders as $order)
{
    print("$name is ordering $choice.\n");
}
?>