<?php

require("../includes/helpers.php");


// for debugging, uncomment the line below so you can see what you're working with in $_POST
// var_dump($_POST);


// extract the $_POST dictionary into local variables (e.g. $recipient_name, $select_greeting, etc)
extract($_POST);



// VALIDATION ----------------------------------------------

// if the user didn't type their name, redirect back to the form
if (empty($recipient_name))
{
    header("Location: index.php");
}



// DETERMINE GREETING TEXT -------------------------------

// decide what the greeting text (e.g. "What is up") should be. 
// by default, use whatever was chosen from the <select> menu
$greeting_text = $select_greeting;

// TODO 
// if the user provided a custom greeting,
//  -- overwrite $greeting_text to be the custom greeting instead
//  -- and also add the custom greeting as a new row to the database 
//          -- to do this, simply pass it to the create_new_greeting() function from helpers.php

if (empty($_POST['custom_greeting']) == false) //i did this
{
    $greeting_text = $_POST['custom_greeting'];
    create_new_greeting($greeting_text);    //and this
    //TODO  add the custom greeting by passing it to create_new_greeting from helpers.php
}
else
{
    $greeting_text = $select_greeting;
}


// UPDATE `num_times` ---------------------------------------

// TODO
// increment the `num_times` field in this greeting and update the database. 3 steps:

// 1. get this greeting (the one whose `text` value matches $greeting_text) from the database

$counter = CS50::query("SELECT num_times FROM greetings WHERE text = '$greeting_text'");
$counter = array_pop($counter)["num_times"];

//var_dump($counter);

$counter++;

// 2. figure out what the new `num_times` value should be, and store it in the local variable below
$new_num_times = $counter; // replace the 0. keep this variable around because you'll need it later

//var_dump($new_num_times);

// 3. update the database so that this greeting entry has the correct `num_times` value
$update_num_times = CS50::query("UPDATE greetings SET num_times = '$new_num_times' WHERE text = '$greeting_text'");


// RENDER STUFF -------------------------------------------

render("header.php", ["title" => $greeting_text]);

$data = [
    "num_times" => $new_num_times,
    
    "greeting_text" => $greeting_text
    
    // TODO 
    // what else do we need to pass over to greeting_display.php?
];
render("greeting_display.php", $data);

render("footer.php");

?>
