<?php

// include the CS50 library
require("../vendor/library50-php-5/CS50/CS50.php");

// initialize connection to the database
CS50::init(__DIR__ . "/../config.json");


function render($template, $data=[])
{
    $path = "../views/" . $template;
    
    // TODO 
    // if the file exists, then extract $data and require the template
    
    if (file_exists($path))
    {
        extract($data);
        require($path);
    }
}


function create_new_greeting($new_greeting)
{
    // TODO
    // insert $new_greeting into the database, but only if we don't already have an entry with the same text
    
    $greeting_present = CS50::query("SELECT text FROM greetings WHERE text = '$new_greeting'");
    
    if($greeting_present == NULL)
    {
        $greeting_add = CS50::query("INSERT INTO greetings (text, num_times) VALUES('$new_greeting', '0')");
    }
}


?>