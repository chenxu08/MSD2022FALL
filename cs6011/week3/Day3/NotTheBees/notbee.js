"use strict";

let canvas = document.getElementsByTagName("canvas")[0];
let ctx = canvas.getContext("2d");

let cWidth = canvas.width;
let cHeight= canvas.height;
let bee1 , bee2, bee3, bee4, bee5;
let bees =[bee1,bee2,bee3,bee4,bee5];
for (let i= 0; i<bees.length;i++){
    bees[i]=new Image();
    bees[i].src="bee.png";
}


let myImg = new Image();
myImg.src="honey.png";
let xPos = 0;
let yPos = 50;
function main(){



    // ctx.drawImage(myImg,20,20, 50,50);
    // window.requestAnimationFrame(animate);

    // while (myImg.x>=550||myImg.x<=500||myImg.y<=200||myImg.y>=250) {
        animate();



}
window.onload = main;


function animate(){
    erase();
    ctx.drawImage(myImg,xPos,yPos, 50,50);
    for (let i= 0; i<bees.length-1;i++){
        ctx.drawImage(bees[i],xPos+(i+1)*50,yPos+(i+1)*50, 50,50,);
    }
}
function erase(){
    ctx.fillStyle="lightblue";
    ctx.fillRect(0,0,cWidth,cHeight);
}
function handlemouse(e){
    erase();
    ctx.drawImage(myImg,e.x,e.y, 50,50,);
    for (let i= 0; i<bees.length-1;i++){
        ctx.drawImage(bees[i],e.x+(i+1)*50,e.y+(i+1)*50, 50,50,);
    }
}
document.onmousemove = handlemouse;