<?php

    function render($template, $data = [])
    {
        $path = _DIR_ . "/../$template .  ".php";
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }
?>