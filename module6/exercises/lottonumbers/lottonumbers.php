<?php

$lottoNumbers = [123, 555, 23, 7129];
$drawnNumbers = [
    "Sally" => 23,
    "Ken" => 3,
    "Jeremy" => 8,
    "Rhonda" => 7129
];

print "\nTonight's numbers:\n";

foreach($lottoNumbers as $lottoNumber)
{
    print("$lottoNumber,");
}
print("\n");
print("\nParticipant's drawn numbers:\n");

foreach($drawnNumbers as $person => $number)
print("$person: $number\n");
print "\n";
?>
