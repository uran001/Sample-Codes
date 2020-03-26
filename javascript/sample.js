var util = require('util');
var exec = require('child_process').exec;

function clear(){
    exec('clear', function(error, stdout, stderr){
        util.puts(stdout);
    });    
}

var today = new Date();
var day = today.getDay();
var daylist = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

console.log("Today is : " + daylist[day] + ".");


for (var i = 60; i >= 0; i--) {
	var hour = today.getHours();
	var minute = today.getMinutes();
	var second = today.getSeconds();
	var prepand = (hour >= 12) ? " AM " : " PM ";

	hour = (hour >= 12)? hour - 12: hour;
	
	if(hour === 0 && prepand === ' PM '){
	if (minute === 0 && second === 0){
		hour = 12;
		prepand = ' Noon';
	}
	else{
		hour = 12;
		prepand = ' PM';
	}
}
	if (hour === 0 && prepand === ' AM'){
		if (minute === 0 && second === 0){
			hour = 12;
			prepand = ' Midnight';
		}
		else{
			hour = 12;
			prepand= ' AM';

		}
	}

console.log("Time is : " + hour + ":" + minute + ":" + second);
  console.log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}