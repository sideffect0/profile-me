open Main;

let make = [%raw {|
    function(m){
        window.onload = function() {
           m(document.getElementById("container"));
        };
    }
|}];

make(main);
