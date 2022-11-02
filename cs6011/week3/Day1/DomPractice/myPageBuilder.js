function main(){
// document.getElementsByTagName('h1').style.color="red";
document.querySelector("h1").style.color="green";
let title = document.querySelector("li");
title.style.color="red";
let myp = document.createElement('p');
let myText = document.createTextNode('I just try some thing');
myp.appendChild(myText);
document.body.appendChild(myp);
myp.style.background="lightblue";
myp.style.fontWeight="bold";
let myt = document.getElementsByTagName('h1');
let myh = myt[0];
console.log(myh);
myh.appendChild(myText.cloneNode());

}
window.onload =main();
