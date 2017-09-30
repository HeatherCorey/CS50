$(document).ready(function()
{
    $('#countries-form').submit(function()
    {
        var capitals = {USA : "Washington D.C.", Canada: "Ottawa", Mexico: "Mexico City"};
        
        if ($('#country').val() == "None")
        {
            alert("Please select a country!");
        }
        else if($('#capital').val() == "")
        {
            var text = document.createTextNode("You must enter a capital!");
            $('#countries-form').append(text);
        }
        else
        {
            
            var country = $('#country').val();
            var url = 'http://api.geonames.org/countryInfoJSON?country=US&username=dshook';
            $.getJSON(url,data, function(data));
            
            if ($('#capital').val() == data.geonames[0].capital)
            {
                alert("You are correct!");
            }
            else
            {
                alert("You are incorrect.");
            }
        }
        event.preventDefault;
    });
});
    