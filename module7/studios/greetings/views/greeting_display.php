<?php

// TODO replace with actual content (e.g. "Cheers, David!")
$name = $_POST['recipient_name'];


$message = $data["greeting_text"] . ", " . $name . ".";     //concatenation

// TODO replace 0 with the correct value
$report_num_times = "This is the " . $data["num_times"] . "th time I have said '" . $data["greeting_text"] . "' to someone.";

?>

<h2><?= htmlspecialchars($message) ?></h2>
<p><?= htmlspecialchars($report_num_times) ?></p>