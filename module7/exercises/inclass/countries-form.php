<?php

session_start();

$countries = ["USA" => "Washington, D.c.", "Canada" => "Ottowa", "Mexico" => "Mexico City"];

$country = $_POST["country"]; // _ tells us its a global variable

    if($country == NULL)  //  or empty($_POST["country"]
    {
        print("Please hit the back button and complete the form!");
    }
    else if($country == "None")
    {
        print("Don't be silly! Pick a country!");
    }
    else
    {
        print("The capital of {$country} is {$countries[$country]}.");
        print("<br></br>");
        
        if(isset($_SESSION["visited"]))
        {
            $visited = $_SESSION["visited"];
        }
        else
        {
            $visited = [];
        }
        
        array_push($visited, $country);
        print("Here are the countries you've visited so far:<br></br>");
        foreach($visited as $visitedCountry)
        {
            print($visitedCountry);
            print("<br></br>");
        }
        $_SESSION["visited"] = $visited;
    }
?>