
<h1>Build Your Greeting</h1>
<form action="greet.php" method="POST"/>
    <label>Your name:</label>
    <input type="text" name="recipient_name" />
    <br/>
    <label>Select a greeting:</label>
    <select name="select_greeting">
        
        <?php for ($i = 0; $i < count($options[0]); $i++)
        {
            echo("<option value='{$options[0][$i]['text']}'>");
            echo $options[0][$i]['text'];
            echo("</option>");
        } ?>
            
    </select>
    <label>Or create your own:</label>
    <input type="text" name="custom_greeting" />
    <br/>
    <input type="submit"/>
</form>