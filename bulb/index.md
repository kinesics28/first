<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>BULB</title>
  <script type="text/javascript">
    function on(){
      document.getElementById("bulb").src = "ONbulb.jpg";
    }
    function off(){
      document.getElementById("bulb").src = "OFFbulb.jpg";
    }
  </script>
  </head>
  <body>
    <marquee scrollamount="15">This bulb is made by Sanchit Patidar</marquee>
    <h1>Move your cursor to light the bulb!</h1>
    <img id="bulb" src="OFFbulb.jpg"
    alt="OFFbulb" onmouseover="on()" onmouseleave="off()">
  </body>
</html>
