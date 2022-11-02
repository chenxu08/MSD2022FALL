function main(){

document.writeln("hello world");

console.log("hello world!");
let myObj = { name: "chen", theage: "25"};
let myArray =["hello",true,8,9.5,myObj];

for ( let val of myArray){ 
	console.log(val);
}
function f(a,b){
	console.log(a+b);
} 

let add = function(a,b){
	console.log(a+b);
} 
f(3,3);
add(2,3);
add(2,3.5);
add(3.5,5.6);
add("hello",5);
add("hello",5.5);
add("yes","hello")
}
window.onload = main;